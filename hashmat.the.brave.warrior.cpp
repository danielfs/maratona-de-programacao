// http://www.urionlinejudge.com.br/judge/en/problems/view/1198
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    long long h, o;
     
    while( scanf( "%lld %lld", &h, &o ) == 2 ) {
        long long r = h - o;
         
        if( r < 0 ) {
            r = r * -1;
        }
         
        printf( "%lld\n", r );
    }
 
    return 0;
}