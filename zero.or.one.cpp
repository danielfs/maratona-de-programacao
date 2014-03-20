// http://www.urionlinejudge.com.br/judge/en/problems/view/1467
#include <stdio.h>
 
int main() {
 
    int a, b, c;
     
    while( scanf( "%d %d %d", &a, &b, &c ) == 3 ) {
        if( a != b && b == c ) printf( "A\n" );
        else if( b != a && a == c ) printf( "B\n" );
        else if( c != b && a == b ) printf( "C\n" );
        else printf( "*\n");
    }
 
    return 0;
}