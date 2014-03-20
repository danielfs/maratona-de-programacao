// http://www.urionlinejudge.com.br/judge/en/problems/view/1277
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
     
    long t;
    short n;
     
    cin >> t;
     
    for( short i = 0; i < t; i++ ) {
        cin >> n;
         
        string nomes[ n ], frequencias[ n ];
        vector<string> reprovados;
         
        for( short i = 0; i < n; i++ ) cin >> nomes[ i ];
        for( short i = 0; i < n; i++ ) cin >> frequencias[ i ];
         
        for( short i = 0; i < n; i++ ) {
            double quantidade = 0.0, presente = 0.0;
            string::iterator it;
             
            for( it = frequencias[ i ].begin(); it != frequencias[ i ].end(); it++ ) {
                 
                if( *it != 'M' && *it != 'm' ) quantidade += 1.0;
                if( *it == 'P' || *it == 'p' ) {
                    presente += 1.0;
                }
            }
             
            if( presente / quantidade < 0.75 ) {
                reprovados.push_back( nomes[ i ] );
            }
        }
         
        vector<string>::iterator it;
        bool primeiro = true;
         
        for( it = reprovados.begin(); it != reprovados.end(); it++ ) {
            if( primeiro ) {
                cout << *it;
                primeiro = false;
            }
            else {
                cout << " " << *it;
            }
        }
         
        cout << endl;
    }
     
    return 0;
}