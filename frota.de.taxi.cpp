// http://br.spoj.com/problems/FROTATAX/
#include <stdio.h>

int main() {
    
    float custoAlcool, custoGasolina, rendimentoAlcool, rendimentoGasolina, custoTotalAlcool, custoTotalGasolina;
    
    scanf( "%f %f %f %f", &custoAlcool, &custoGasolina, &rendimentoAlcool, &rendimentoGasolina );
    
    custoTotalAlcool = ( 20.00 * custoAlcool ) / rendimentoAlcool;
    custoTotalGasolina = ( 20.00 * custoGasolina ) / rendimentoGasolina;
    
    if( custoTotalGasolina > custoTotalAlcool ) {
        printf( "A" );
    }
    else {
        printf( "G" );
    }
    
    return 0;
}