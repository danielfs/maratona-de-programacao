// http://www.urionlinejudge.com.br/judge/en/problems/view/1309
#include <stdio.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
     
    string dollars;
    int cents;
     
    while( cin >> dollars ) {
        scanf( "%d", &cents );
         
        printf( "$" );
         
        size_t tamanho = dollars.size() % 3;
        size_t i = 0, j = 1;
         
        for( ; i < tamanho; i++ ) {
            cout << dollars[ i ];
        }
         
        if( tamanho > 0 && i < dollars.size() - 1 )
            cout << ",";
         
        for( ; i < dollars.size(); i++, j++ ) {
             
            cout << dollars[ i ];
             
            if( j % 3 == 0 && i < dollars.size() - 1 ) cout << ",";
        }
         
        printf( ".%02d\n", cents );
    }
     
    return 0;
}