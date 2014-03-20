// http://www.urionlinejudge.com.br/judge/en/problems/view/1150
#include <stdio.h>
 
int main() {
 
    int x, z, contador = 1, soma = 0;
     
    scanf( "%d %d", &x, &z );
     
    while( z < x ) {
        scanf( "%d", &z );
    }
     
    soma = x;
     
    for( ; ; contador += 1 ) {
     
        if( soma > z ) {
            break;
        }
     
        soma += ( x + contador );
    }
     
    printf( "%d\n", contador );
 
    return 0;
}