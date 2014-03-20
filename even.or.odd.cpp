// http://www.urionlinejudge.com.br/judge/en/problems/view/1074
#include <stdio.h>
 
int main() {
 
    int x, numero;
     
    scanf( "%d", &x );
     
    for( int i = 0; i < x; i++ ) {
        scanf( "%d", &numero );
         
        if( numero != 0 ) {
            if( numero % 2 == 0 ) {
                printf( "EVEN " );
            }
            else {
                printf( "ODD " );
            }
        }
         
        if( numero < 0 ) {
            printf( "NEGATIVE\n" );
        }
        else if( numero > 0 ) {
            printf( "POSITIVE\n" );
        }
        else {
            printf( "NULL\n" );
        }
         
    }
 
    return 0;
}