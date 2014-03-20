// http://www.urionlinejudge.com.br/judge/en/problems/view/1332
#include <iostream>
#include <string>
 
using namespace std;
 
void reconhecerPalavra( string &s ) {
     
    if( s.size() == 5 ) {
        cout << 3 << endl;
    }
    else {
        char c1 = s[ 0 ], c2 = s[ 1 ], c3 = s[ 2 ];
         
        if( ( c1 == 'o' && c2 == 'n' ) || ( c1 == 'o' && c3 == 'e' ) || ( c2 == 'n' && c3 == 'e' ) ) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
     
}
 
int main() {
 
    short n;
    string s;
     
    cin >> n;
     
    for( short i = 0; i < n; i++ ) {
        cin >> s;
         
        reconhecerPalavra( s );
    }
 
    return 0;
}