// http://www.urionlinejudge.com.br/judge/en/problems/view/1149
#include <stdio.h>
 
int main() {
 
    int a, n, soma = 0;
     
    scanf( "%d %d", &a, &n );
     
    while( n <= 0 ) {
        scanf( "%d", &n );
    }
     
    n -= 1;
    soma = a;
     
    for( int i = 1; i <= n; i++ ) {
        soma += ( a + i );
    }
     
    printf( "%d\n", soma );
 
    return 0;
}