// http://www.urionlinejudge.com.br/judge/en/problems/view/1159
#include <stdio.h>
 
int main() {
 
    int x, soma;
     
    while( scanf( "%d", &x ) == 1 && x != 0 ) {
     
        soma = 0;
     
        if( x % 2 != 0 ) {
            x += 1;
        }
         
        for( int i = 0; i < 5; i++ ) {
            soma += x;
            x += 2;
        }
         
        printf( "%d\n", soma );
    }
 
    return 0;
}