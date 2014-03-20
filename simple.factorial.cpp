// http://www.urionlinejudge.com.br/judge/en/problems/view/1153
#include <stdio.h>
 
int main() {
 
    int n, fatorial = 1;
     
    scanf( "%d", &n );
     
    for( int i = 1; i <= n; i++ ) {
        fatorial *= i;
    }
     
    printf( "%d\n", fatorial );
 
    return 0;
}