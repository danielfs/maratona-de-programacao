// http://br.spoj.com/problems/RECUPERA/
#include <stdio.h>

int main() {
    int quantidadeNumeros, numero, numeroEscolhido, soma, instancia = 1;
    
    while( scanf( "%d", &quantidadeNumeros ) == 1 ) {
    
        soma = 0;
        numeroEscolhido = -99;
    
        for( int i = 0; i < quantidadeNumeros; i++ ) {
            scanf( "%d", &numero );
            
            if( numero == soma && numeroEscolhido == -99 ) {
                numeroEscolhido = numero;
            }
            
            soma += numero;
        }
        
        printf( "Instancia %d\n", instancia++ );
        
        if( numeroEscolhido == -99 ) {
            printf( "nao achei\n\n" );
        }
        else {
            printf( "%d\n\n", numeroEscolhido );
        }
    }

    return 0;
}