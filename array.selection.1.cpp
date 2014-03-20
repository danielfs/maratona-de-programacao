// http://www.urionlinejudge.com.br/judge/en/problems/view/1174
#include <stdio.h>
 
int main() {
 
    double n;
     
    for( int i = 0; i < 100; i++ ) {
        scanf( "%lf", &n );
         
        if( n <= 10.0 ) {
            printf( "A[%d] = %g\n", i, n );
        }
    }
 
    return 0;
}