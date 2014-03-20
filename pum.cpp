// http://www.urionlinejudge.com.br/judge/en/problems/view/1142
#include <stdio.h>
 
int main() {
 
    int n, numero = 1;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        printf( "%d %d %d PUM\n", numero, numero + 1, numero + 2 );
         
        numero += 4;
    }
 
    return 0;
}