// http://www.urionlinejudge.com.br/judge/en/problems/view/1164
#include <stdio.h>
 
int main() {
 
    int n, x, soma;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
     
        soma = 1;
     
        scanf( "%d", &x );
         
        for( int j = 2; j <= ( x / 2 ); j++ ) {
            if( x % j == 0 ) {
                soma += j;
            }
        }
         
        if( soma == x && x != 1 ) {
            printf( "%d eh perfeito\n", x );
        }
        else {
            printf( "%d nao eh perfeito\n", x );
        }
         
    }
 
    return 0;
}