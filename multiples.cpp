// http://www.urionlinejudge.com.br/judge/en/problems/view/1044
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, maior, menor;
     
    scanf( "%d %d", &a, &b );
     
    maior = ( a + b + abs( a - b ) ) / 2;
    menor = a + b - maior;
     
    if( maior % menor == 0 ) {
        printf( "Sao Multiplos\n" );
    }
    else {
        printf( "Nao sao multiplos\n" );
    }
 
    return 0;
}