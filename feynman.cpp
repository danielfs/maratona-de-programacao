// http://www.urionlinejudge.com.br/judge/en/problems/view/1323
#include <stdio.h>
 
int main() {
    unsigned char n;
     
    while( scanf( "%hhu", &n ) == 1 && n != 0 )
        printf( "%d\n", ( ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6 ) );
     
    return 0;
}