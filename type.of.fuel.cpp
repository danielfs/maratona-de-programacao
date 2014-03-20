// http://www.urionlinejudge.com.br/judge/en/problems/view/1134
#include <stdio.h>
 
int main() {
 
    int tipo, alcool = 0, gasolina = 0, diesel = 0;
     
    while( scanf( "%d", &tipo ) == 1 && tipo != 4 ) {
        if( tipo == 1 ) {
            alcool += 1;
        }
        else if( tipo == 2 ) {
            gasolina += 1;
        }
        else if( tipo == 3 ) {
            diesel += 1;
        }
    }
     
    printf( "MUITO OBRIGADO\n" );
    printf( "Alcool: %d\n", alcool );
    printf( "Gasolina: %d\n", gasolina );
    printf( "Diesel: %d\n", diesel );
 
    return 0;
}