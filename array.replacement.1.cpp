// http://www.urionlinejudge.com.br/judge/en/problems/view/1172
#include <stdio.h>
 
int main() {
 
    int x;
     
    for( int i = 0; i < 10; i++ ) {
        scanf( "%d", &x );
         
        if( x <= 0 ) {
            printf( "X[%d] = 1\n", i );
        }
        else {
            printf( "X[%d] = %d\n", i, x );
        }
    }
 
    return 0;
}