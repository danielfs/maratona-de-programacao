// http://www.urionlinejudge.com.br/judge/en/problems/view/1064
#include <stdio.h>
 
int main() {
 
    int quantidade = 0, quantidadePositivos = 0;
    float numero, soma = 0.0, media;
     
    for( int i = 0; i < 6; i++ ) {
        scanf( "%f", &numero );
         
        if( numero > 0 ) {
            quantidadePositivos += 1;
            soma += numero;
        }
         
        quantidade += 1;
    }
     
    media = soma / quantidadePositivos;
     
    printf( "%d valores positivos\n", quantidadePositivos );
    printf( "%.1f\n", media );
 
    return 0;
}