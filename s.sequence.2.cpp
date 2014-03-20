// http://www.urionlinejudge.com.br/judge/en/problems/view/1156
#include <stdio.h>
 
int main() {
 
    float s = 1.0;
     
    for( int i = 3, j = 2; i <= 39; i += 2, j *= 2 ) {
        s += ( float ) i / j;
    }
     
    printf( "%.2f\n", s );
 
    return 0;
}