// http://www.urionlinejudge.com.br/judge/en/problems/view/1132
#include <stdio.h>
 
int main() {
 
    int a, b, maior, menor, soma = 0;
     
    scanf( "%d %d", &a, &b );
     
    if( a > b ) {
        maior = a;
    }
    else {
        maior = b;
    }
     
    menor = a + b - maior;
     
    for( int i = menor; i <= maior; i++ ) {
        if( i % 13 != 0 ) {
            soma += i;
        }
    }
     
    printf( "%d\n", soma );
 
    return 0;
}