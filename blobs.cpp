// http://www.urionlinejudge.com.br/judge/en/problems/view/1170
#include <stdio.h>
 
int calcularDias( float x ) {
    int d = 0;
     
    while( x > 1 ) {
        x = x / 2;
        d = d + 1;
    }
     
    return d;
}
 
int main() {
 
    int n, d;
    float x;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
     
        scanf( "%f", &x );
     
        d = calcularDias( x );
         
        printf( "%d dias\n", d );
    }
 
    return 0;
}