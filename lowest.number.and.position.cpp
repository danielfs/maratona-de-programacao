// http://www.urionlinejudge.com.br/judge/en/problems/view/1180
#include <stdio.h>
#include <limits.h>
 
int main() {
 
    int n, x, menor = INT_MAX, posicao = 0;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d", &x );
         
        if( x < menor ) {
            menor = x;
            posicao = i;
        }
    }
     
    printf( "Menor valor: %d\n", menor );
    printf( "Posicao: %d\n", posicao );
 
    return 0;
}