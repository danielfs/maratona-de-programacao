// http://www.urionlinejudge.com.br/judge/en/problems/view/1234
#include <iostream>
#include <string>
 
#define MAIUSCULO false
#define MINUSCULO true
 
using namespace std;
 
int main() {
 
    string frase;
    bool letterCase = false;
     
    while( getline( cin, frase ) ) {
     
        letterCase = false;
     
        for( int i = 0; i < frase.size(); i++ ) {
            char c = frase[ i ];
             
            if( c == ' ' ) {
                cout << c;
                 
                continue;
            }
             
            if( letterCase == MAIUSCULO ) {
             
                if( c >= 'a' && c <= 'z' ) {
                    c = 'A' + ( c - 'a' );
                }
             
                letterCase = MINUSCULO;
            }
            else {
             
                if( c >= 'A' && c <= 'Z' ) {
                    c = 'a' + ( c - 'A' );
                }
             
                letterCase = MAIUSCULO;
            }
             
            cout << c;
        }
         
        cout << endl;
    }
 
    return 0;
}