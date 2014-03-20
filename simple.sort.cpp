// http://www.urionlinejudge.com.br/judge/en/problems/view/1042
#include <stdio.h>
 
int main() {
     
    int original[ 3 ], ordenado[ 3 ];
     
    scanf( "%d %d %d", &original[ 0 ], &original[ 1 ], &original[ 2 ] );
     
    ordenado[ 0 ] = original[ 0 ];
    ordenado[ 1 ] = original[ 1 ];
    ordenado[ 2 ] = original[ 2 ];
     
    for( int i = 1; i < 3; i++ ) {
        for( int j = 0; j < i; j++ ) {
            if( ordenado[ i ] < ordenado[ j ] ) {
                int t = ordenado[ j ];
                ordenado[ j ] = ordenado[ i ];
                ordenado[ i ] = t;
            }
        }
    }
     
    printf( "%d\n", ordenado[ 0 ] );
    printf( "%d\n", ordenado[ 1 ] );
    printf( "%d\n\n", ordenado[ 2 ] );
     
    printf( "%d\n", original[ 0 ] );
    printf( "%d\n", original[ 1 ] );
    printf( "%d\n", original[ 2 ] );
     
    return 0;
}