// http://www.urionlinejudge.com.br/judge/en/problems/view/1192
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
 
using namespace std;
 
int main() {
 
    int n;
    string t;
     
    cin >> n;
     
    while( --n >= 0 ) {
        cin >> t;
         
        int  a = t[ 0 ] - '0';
        char b = t[ 1 ];
        int  c = t[ 2 ] - '0';
         
         
        if( a == c ) {
            cout << a * c << endl;
        }
        else if( isupper( b ) ) {
            cout << ( c - a ) << endl;
        }
        else if( islower( b ) ) {
            cout << ( a + c ) << endl;
        }
    }
 
    return 0;
}