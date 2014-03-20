// http://www.urionlinejudge.com.br/judge/en/problems/view/1037
#include <stdio.h>
 
int main() {
     
    float numero;
     
    scanf( "%f", &numero );
     
    if( numero < 0 || numero > 100 ) {
        printf( "Fora do intervalo\n" );
    }
    else if( numero <= 25 ) {
        printf( "Intervalo [0,25]\n" );
    }
    else if( numero > 25 && numero <= 50 ) {
        printf( "Intervalo (25,50]\n" );
    }
    else if( numero > 50 && numero <= 75 ) {
        printf( "Intervalo (50,75]\n" );
    }
    else if( numero > 75 ) {
        printf( "Intervalo (75,100]\n" );
    }
     
    return 0;
}