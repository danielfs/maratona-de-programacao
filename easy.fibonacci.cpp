// http://www.urionlinejudge.com.br/judge/en/problems/view/1151
#include <stdio.h>
 
int main() {
 
    int n, a = 0, b = 1;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        printf( "%d", a );
         
        if( i == n - 1 ) {
            printf( "\n" );
        }
        else {
            printf( " " );
        }
         
        b = a + b;
        a = b - a;
    }
 
    return 0;
}