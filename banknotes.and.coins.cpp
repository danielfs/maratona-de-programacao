// http://www.urionlinejudge.com.br/judge/en/problems/view/1021
#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
     
    double valores[] = { 100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.1, 0.05, 0.01 };
    double valor;
     
    cin >> valor;
     
    for( int i = 0; i < 12; i++ ) {
         
        int quantidade = 0;
         
        if( i == 0 ) {
            cout << "NOTAS:" << endl;
        }
        else if( i == 6 ) {
            cout << "MOEDAS:" << endl;
        }
         
        while( valor > valores[ i ] ) {
            valor = valor - valores[ i ];
            quantidade += 1;
        }
         
        if( i <= 5 ) {
            printf( "%d nota(s) de R$ %.2f\n", quantidade, valores[ i ] );
        }
        else if( i >= 6 ) {
            printf( "%d moeda(s) de R$ %.2f\n", quantidade, valores[ i ] );
        }
    }
     
    return 0;
}