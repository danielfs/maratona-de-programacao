// http://www.urionlinejudge.com.br/judge/en/problems/view/1143
#include <stdio.h>
 
int main() {
 
    int n;
     
    scanf( "%d", &n );
     
    for( int i = 1; i <= n; i++ ) {
        printf( "%d %d %d\n", i, i * i, i * i * i );
    }
 
    return 0;
}