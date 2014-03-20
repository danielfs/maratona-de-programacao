// http://www.urionlinejudge.com.br/judge/en/problems/view/1060
#include <stdio.h>
 
int main() {
 
    float numero;
    int positivos = 0;
     
    for( int i = 0; i < 6; i++ ) {
        scanf( "%f", &numero );
         
        if( numero > 0.0 ) {
            positivos += 1;
        }
    }
     
    printf( "%d valores positivos\n", positivos );
 
    return 0;
}