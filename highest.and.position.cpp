// http://www.urionlinejudge.com.br/judge/en/problems/view/1080
#include <stdio.h>
 
int main() {
 
    int numero, maior = 0, posicao = 0, posicaoMaior;
     
    for( int i = 0; i < 100; i++ ) {
        scanf( "%d", &numero );
        posicao += 1;
         
        if( numero > maior ) {
            maior = numero;
            posicaoMaior = posicao;
        }
    }
     
    printf( "%d\n", maior );
    printf( "%d\n", posicaoMaior );
     
    return 0;
}