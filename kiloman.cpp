// http://www.urionlinejudge.com.br/judge/en/problems/view/1250
#include <stdio.h>
 
int main() {
 
    int n, s, q;
     
    scanf( "%d", &n );
     
    for( int t = 0; t < n; t++ ) {
        scanf( "%d", &s );
         
        int altura[ s ], a;
        char salto[ s ], p;
         
        q = 0;
         
        for( int i = 0; i < s; i++ ) {
            scanf( "%d", &a );
             
            altura[ i ] = a;
        }
         
        scanf( "%s", salto );
         
        for( int i = 0; i < s; i++ ) {
            a = altura[ i ];
            p = salto[ i ];
             
            if( p == 'S' && a <= 2 ) q += 1;
            if( p == 'J' && a > 2 ) q += 1;
        }
         
        printf( "%d\n", q );
    }
 
    return 0;
}