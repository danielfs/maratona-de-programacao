// http://www.urionlinejudge.com.br/judge/en/problems/view/1161
#include <stdio.h>
 
long long calculaFatorial( char n ) {
    long long f = 1;
     
    for( char i = 1; i <= n; i++ ) {
        f = f * i;
    }
     
    return f;
}
 
int main() {
 
    unsigned char n, m;
     
    while( scanf( "%i %i", &n, &m ) == 2 ) {
        printf( "%lld\n", calculaFatorial( n ) + calculaFatorial( m ) );
    }
 
    return 0;
}