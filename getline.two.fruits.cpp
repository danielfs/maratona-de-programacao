// http://www.urionlinejudge.com.br/judge/en/problems/view/1217
#include <stdio.h>
 
int main() {
 
    int n, q;
    double p, s = 0.0, sq = 0.0;
    char fruta[ 100 ], c;
     
    scanf( "%d", &n );
     
    for( int i = 1; i <= n; i++ ) {
     
        fflush( stdin );
     
        scanf( "%lf", &p );
        s += p;
        q = 0;
         
        while( scanf( "%s%c", fruta, &c ) ) {
            q += 1;
             
            if( c == '\n' ) break;
        }
         
        sq += q;
         
        printf( "day %d: %d kg\n", i, q );
    }
     
    printf( "%.2f kg by day\n", ( sq / n ) );
    printf( "R$ %.2f by day\n", ( s / n ) );
 
    return 0;
}