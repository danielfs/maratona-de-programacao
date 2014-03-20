// http://www.urionlinejudge.com.br/judge/en/problems/view/1118
#include <stdio.h>
 
int main() {
 
    int i, escolha;
    float numero, notas[ 2 ], media;
     
    do {
         
        i = 0;
         
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
         
        do {
            printf( "novo calculo (1-sim 2-nao)\n" );
        }
        while( scanf( "%d", &escolha ) && escolha != 1 && escolha != 2 );
         
    } while( escolha == 1 );
 
    return 0;
}