// http://www.urionlinejudge.com.br/judge/en/problems/view/1249
#include <iostream>
#include <string>
#include <ctype.h>
 
using namespace std;
 
char rot13( int c ) {
 
    int limite = isupper( c ) ? 90 : 122;
    int inicial = isupper( c ) ? 64 : 96;
     
    c += 13;
     
    if( c > limite ) {
        c = inicial + ( c - limite );
    }
     
    return c;
}
 
void tratarPalavra( string &w ) {
     
    string::iterator it;
     
    for( it = w.begin(); it != w.end(); it++ ) {
        if( isalpha( *it ) ) {
            cout << rot13( *it );
        }
        else {
            cout << *it;
        }
    }
     
    cout << endl;
}
 
int main() {
 
    string w;
     
    while( getline( cin, w ) ) {
        tratarPalavra( w );
    }
 
    return 0;
}