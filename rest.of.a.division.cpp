// http://www.urionlinejudge.com.br/judge/en/problems/view/1133
#include <stdio.h>
 
int main() {
 
    int a, b, maior, menor;
     
    scanf( "%d %d", &a, &b );
     
    if( a > b ) {
        maior = a;
    }
    else {
        maior = b;
    }
     
    menor = a + b - maior;
     
    maior -= 1;
    menor += 1;
     
    for( int i = menor; i <= maior; i++ ) {
        if( i % 5 == 2 || i % 5 == 3 ) {
            printf( "%d\n", i );
        }
    }
 
    return 0;
}