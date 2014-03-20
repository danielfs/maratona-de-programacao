// http://www.urionlinejudge.com.br/judge/en/problems/view/1097
#include <stdio.h>
 
int main() {
 
    for( int i = 1; i <= 9; i += 2 ) {
        for( int j = 6; j >= 4; j -= 1 ) {
            printf( "I=%d J=%d\n", i, i + j );
        }
    }
 
    return 0;
}