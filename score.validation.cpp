// http://www.urionlinejudge.com.br/judge/en/problems/view/1117
#include <stdio.h>
 
int main() {
 
    int quantidade, i = 0;
    float notas[ 2 ], media, numero;
     
    while( i < 2 && scanf( "%f", &numero ) == 1 ) {
        if( numero >= 0.0 && numero <= 10.0 ) {
            notas[ i ] = numero;
            i += 1;
        }
        else {
            printf( "nota invalida\n" );
        }
    }
     
    media = ( notas[ 0 ] + notas[ 1 ] ) / 2;
     
    printf( "media = %.2f\n", media );
 
    return 0;
}