// http://www.urionlinejudge.com.br/judge/en/problems/view/1533

#include <iostream>

using namespace std;

int main() {
    int n;
    
    while( cin >> n && n != 0 ) {
        int numeros[ n ], maior = 0, segundoMaior = 0, indice;
        
        for( int i = 0; i < n; i++ ) {
            int g;
            
            cin >> g;
            numeros[ i ] = g;
            
            if( g > maior ) maior = g;
        }
        
        for( int i = 0; i < n; i++ ) {
            if( numeros[ i ] < maior && numeros[ i ] > segundoMaior ) {
                segundoMaior = numeros[ i ];
                indice = i;
            }
        }
        
        cout << ( indice + 1 ) << endl;
    }
    
    return 0;
}