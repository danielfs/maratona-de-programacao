// http://www.urionlinejudge.com.br/judge/en/problems/view/1253
#include <iostream>
#include <string>
#include <ctype.h>
 
using namespace std;
 
char rotX( int c, int shift ) {
 
    int limite = 90;
    int inicial = 65;
     
    c -= shift;
     
    if( c < inicial ) {
        c = 91 - ( inicial - c );
    }
     
    return c;
}
 
void tratarPalavra( string &w, int shift ) {
     
    string::iterator it;
     
    for( it = w.begin(); it != w.end(); it++ ) {
        cout << rotX( *it, shift );
    }
     
    cout << endl;
}
 
int main() {
 
    int t, s;
    string w;
     
    cin >> t;
     
    for( int i = 0; i < t; i++ ) {
        cin >> w;
        cin >> s;
         
        tratarPalavra( w, s );
    }
 
    return 0;
}