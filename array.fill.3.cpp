// http://www.urionlinejudge.com.br/judge/en/problems/view/1178
#include <stdio.h>
 
int main() {
 
    double n;
     
    scanf( "%lf", &n );
     
    for( int i = 0; i < 100; i++ ) {
        printf( "N[%d] = %.4lf\n", i, n );
         
        n = n / 2.0;
    }
 
    return 0;
}