// http://www.urionlinejudge.com.br/judge/en/problems/view/1069
#include <stdio.h>
 
int main() {
     
    int n, a, q;
    char c;
     
    scanf( "%d\n", &n );
     
    for( int i = 0; i < n; i++ ) {
        a = q = 0;
         
        while( scanf( "%c", &c ) == 1 ) {
            if( c == '<' ) {
                a += 1;
            }
            else if( c == '>' ) {
                if( a > 0 ) {
                    q += 1;
                    a -= 1;
                }
            }
            else if( c == '\n' ) {
                printf( "%d\n", q );
                 
                break;
            }
        }
    }
     
    return 0;
}