// http://www.urionlinejudge.com.br/judge/en/problems/view/1045
#include <stdio.h>
 
int main() {
 
    float lados[ 3 ], a, b, c;
     
    scanf( "%f %f %f", &a, &b, &c );
     
    lados[ 0 ] = a;
    lados[ 1 ] = b;
    lados[ 2 ] = c;
     
    for( int i = 1; i < 3; i++ ) {
        for( int j = 0; j < i; j++ ) {
            if( lados[ i ] > lados[ j ] ) {
                int t = lados[ j ];
                lados[ j ] = lados[ i ];
                lados[ i ] = t;
            }
        }
    }
     
    a = lados[ 0 ];
    b = lados[ 1 ];
    c = lados[ 2 ];
     
     
    if( a > ( b + c ) ) {
        printf( "NAO FORMA TRIANGULO\n" );
    }
     
    if( a * a == b * b + c * c ) {
        printf( "TRIANGULO RETANGULO\n" );
    }
     
    if( a * a > b * b + c * c ) {
        printf( "TRIANGULO OBTUSANGULO\n" );
    }
     
    if( a * a < b * c + c * c ) {
        printf( "TRIANGULO ACUTANGULO\n" );
    }
     
    if( a == b && a == c ) {
        printf( "TRIANGULO EQUILATERO\n" );
    }
     
    if( ( a == b && a != c ) || ( a == c && a != b ) || ( b == c && b != a ) ) {
        printf( "TRIANGULO ISOSCELES\n" );
    }
 
    return 0;
}