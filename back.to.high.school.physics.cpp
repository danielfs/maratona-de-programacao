// http://www.urionlinejudge.com.br/judge/en/problems/view/1197
#include <stdio.h>
 
int main() {
     
    int v, t, d;
     
    while( scanf( "%d %d", &v, &t ) == 2 ) {
        d = v * t * 2;
         
        printf( "%d\n", d );
    }
     
    return 0;
}