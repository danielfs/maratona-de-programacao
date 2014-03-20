// http://www.urionlinejudge.com.br/judge/en/problems/view/1179
#include <stdio.h>
 
int main() {
 
    int par = 0, impar = 0, pares[ 5 ], impares[ 5 ], n;
     
    for( int i = 0; i < 15; i++ ) {
        scanf( "%d", &n );
         
        if( n % 2 == 0 ) {
            pares[ par++ ] = n;
        }
        else {
            impares[ impar++ ] = n;
        }
         
        if( par == 5 ) {
            for( int j = 0; j < 5; j++ ) {
                printf( "par[%d] = %d\n", j, pares[ j ] );
            }
             
            par = 0;
        }
         
        if( impar == 5 ) {
            for( int j = 0; j < 5; j++ ) {
                printf( "impar[%d] = %d\n", j, impares[ j ] );
            }
             
            impar = 0;
        }
    }
     
    if( impar > 0 ) {
        for( int j = 0; j < impar; j++ ) {
            printf( "impar[%d] = %d\n", j, impares[ j ] );
        }
    }
     
    if( par > 0 ) {
        for( int j = 0; j < par; j++ ) {
            printf( "par[%d] = %d\n", j, pares[ j ] );
        }
    }
 
    return 0;
}