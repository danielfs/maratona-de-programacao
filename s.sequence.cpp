// http://www.urionlinejudge.com.br/judge/en/problems/view/1155
#include <stdio.h>
 
int main() {
 
    float s = 1.0;
     
    for( int i = 2; i <= 100; i++ ) {
        s += 1.0 / i;
    }
     
    printf( "%.2f\n", s );
 
    return 0;
}