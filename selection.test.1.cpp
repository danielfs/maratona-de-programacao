// http://www.urionlinejudge.com.br/judge/en/problems/view/1035
#include <stdio.h>
 
int main() {
     
    int a, b, c, d;
    bool aceito = false;
     
    scanf( "%d %d %d %d", &a, &b, &c, &d );
     
    aceito = ( b > c );
    aceito = aceito && ( d > a );
    aceito = aceito && ( ( c + d ) > ( a + b ) );
    aceito = aceito && ( ( c > 0 ) && ( d > 0 ) );
    aceito = aceito && ( a % 2 == 0 );
     
    if( aceito ) {
        printf( "Valores aceitos\n" );
    }
    else {
        printf( "Valores nao aceitos\n" );
    }
     
    return 0;
}