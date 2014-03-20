// http://www.urionlinejudge.com.br/judge/en/problems/view/1026
#include <stdio.h>
 
int main() {
 
    long long a, b, c;
     
    while( scanf( "%lld %lld", &a, &b ) == 2 ) {
        c = a ^ b;
         
        printf( "%lld\n", c );
    }
 
    return 0;
}