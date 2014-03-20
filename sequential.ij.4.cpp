// http://www.urionlinejudge.com.br/judge/en/problems/view/1098
#include <stdio.h>
 
int main() {
     
    int c = 0;
     
    for( double i = 0.0; i <= 2.0; i += 0.2 ) {
        for( double j = 1.0; j <= 3.0; j += 1.0 ) {
            if( i == 0.0 || i == 1.0 || c > 29 ) {
                printf( "I=%.0f J=%.0f\n", i, i + j );
            }
            else {
                printf( "I=%.1f J=%.1f\n", i, i + j );
            }
            c += 1;
        }
    }
 
    return 0;
}