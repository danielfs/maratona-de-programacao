// http://www.urionlinejudge.com.br/judge/en/problems/view/1036
#include <stdio.h>
#include <math.h>
 
int main() {
     
    int a, b, c, delta;
    float raiz1, raiz2;
     
    scanf( "%d %d %d", &a, &b, &c );
     
    delta = b * b - 4 * a * c;
     
    if( delta < 0 ) {
        printf( "Impossivel calcular\n" );
        return 0;
    }
     
    raiz1 = ( 0 - b + sqrt( delta ) ) / ( 2 * a );
    raiz2 = ( 0 - b - sqrt( delta ) ) / ( 2 * a );
     
    printf( "R1 = %.5f\n", raiz1 );
    printf( "R2 = %.5f\n", raiz2 );
     
    return 0;
}