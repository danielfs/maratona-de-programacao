// http://www.urionlinejudge.com.br/judge/en/problems/view/1113
#include <stdio.h>
 
int main() {
 
    int a, b;
     
    while( scanf( "%d %d", &a, &b ) == 2 && a != b ) {
        if( a < b ) {
            printf( "Crescente\n" );
        }
        else {
            printf( "Decrescente\n" );
        }
    }
 
    return 0;
}