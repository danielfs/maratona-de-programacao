// http://www.urionlinejudge.com.br/judge/en/problems/view/1070
#include <stdio.h>
 
int main() {
 
    int x;
     
    scanf( "%d", &x );
     
    if( x % 2 == 0 ) {
        x += 1;
    }
     
    for( int i = 0; i < 6; i++ ) {
        printf( "%d\n", x );
        x += 2;
    }
 
    return 0;
}