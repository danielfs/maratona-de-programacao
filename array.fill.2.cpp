// http://www.urionlinejudge.com.br/judge/en/problems/view/1177
#include <stdio.h>
 
int main() {
 
    int t, c = 0;
     
    scanf( "%d", &t );
     
    for( int i = 0; i < 1000; i++ ) {
        printf( "N[%d] = %d\n", i, c++ );
         
        if( c == t ) {
            c = 0;
        }
    }
 
    return 0;
}