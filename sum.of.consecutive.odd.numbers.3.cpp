// http://www.urionlinejudge.com.br/judge/en/problems/view/1158
#include <stdio.h>
 
int main() {
 
    int n, x, y, soma;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
     
        soma = 0;
     
        scanf( "%d %d", &x, &y );
         
        if( x % 2 == 0 ) {
            x += 1;
        }
         
        while( y-- > 0 ) {
            soma += x;
            x += 2;
        }
         
        printf( "%d\n", soma );
    }
 
    return 0;
}