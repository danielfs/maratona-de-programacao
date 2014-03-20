// http://www.urionlinejudge.com.br/judge/en/problems/view/1154
#include <stdio.h>
 
int main() {
 
    float idade, media, soma = 0.0;
    int quantidade = 0;
     
    while( scanf( "%f", &idade ) == 1 && idade >= 0 ) {
        soma += idade;
        quantidade += 1;
    }
     
    media = soma / quantidade;
     
    printf( "%.2f\n", media );
 
    return 0;
}