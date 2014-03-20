// http://br.spoj.com/problems/POODLEMG/
#include <stdio.h>
#include <cmath>


int main() {
    int n, p;

    while( scanf( "%d %d", &n, &p ) == 2 && n != 0 ) {
        int q = ceil( ( float ) n / p );

        q = q - 4;

        if( q > 16 ) q = 16;
        if( q < 2 ) q = 2;

        printf( "P" );
        for( int i = 0; i < q; i++ )
            printf( "o" );
        printf( "dle\n" );
    }
    
    return 0;
}