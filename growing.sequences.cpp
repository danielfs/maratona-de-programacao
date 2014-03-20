// http://www.urionlinejudge.com.br/judge/en/problems/view/1146
#include <stdio.h>
 
int main() {
 
    int n;
     
    while( scanf( "%d", &n ) == 1 && n != 0 ) {
        for( int i = 1; i <= n; i++ ) {
            printf( "%d", i );
             
            if( i == n ) {
                printf( "\n" );
            }
            else {
                printf( " " );
            }
        }
    }
 
    return 0;
}