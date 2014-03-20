// http://www.urionlinejudge.com.br/judge/en/problems/view/1078
#include <stdio.h>
 
int main() {
 
    int n;
     
    scanf( "%d", &n );
     
    for( int i = 1; i <= 10; i++ ) {
        printf( "%d x %d = %d\n", i, n, i * n );
    }
 
    return 0;
}