// http://www.urionlinejudge.com.br/judge/en/problems/view/1176
#include <stdio.h>
 
long long memo[ 61 ];
int j;
 
long long calcularFibonacci( int i ) {
    if( i > j ) {
        for( int k = j + 1; k <= i; k++ ) {
            memo[ k ] = memo[ k - 1 ] + memo[ k - 2 ];
        }
         
        j = i;
    }
 
    return memo[ i ];
}
 
int main() {
 
    int n, t;
     
    scanf( "%d", &t );
     
    for( int i = 0; i < 61; i++ ) {
        memo[ i ] = -1;
    }
     
    memo[ 0 ] = 0;
    memo[ 1 ] = 1;
    memo[ 2 ] = 1;
    j = 2;
     
    for( int i = 0; i < t; i++ ) {
        scanf( "%d", &n );
         
        printf( "Fib(%d) = %lld\n", n, calcularFibonacci( n ) );
    }
 
    return 0;
}