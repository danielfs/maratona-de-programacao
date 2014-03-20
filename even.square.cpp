// http://www.urionlinejudge.com.br/judge/en/problems/view/1073
#include <stdio.h>
 
int main() {
 
    int numero;
     
    scanf( "%d", &numero );
     
    for( int i = 2; i <= numero; i += 2 ) {
        printf( "%d^%d = %d\n", i, 2, i * i );
    }
 
    return 0;
}