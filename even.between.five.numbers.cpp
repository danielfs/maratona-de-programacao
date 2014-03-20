// http://www.urionlinejudge.com.br/judge/en/problems/view/1065
#include <stdio.h>
 
int main() {
 
    int numero, quantidadePares = 0;
     
    for( int i = 0; i < 5; i++ ) {
        scanf( "%d", &numero );
         
        if( numero % 2 == 0 ) {
            quantidadePares += 1;
        }
    }
     
    printf( "%d valores pares\n", quantidadePares );
 
    return 0;
}