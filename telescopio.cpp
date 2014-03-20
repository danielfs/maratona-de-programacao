// http://br.spoj.com/problems/TELESCO2/
#include <stdio.h>

int main() {
    int abertura, numeroEstrelas, fotons, quantidadeEstrelasVisiveis = 0;
    
    scanf( "%d", &abertura );
    scanf( "%d", &numeroEstrelas );
    
    for( int i = 0; i < numeroEstrelas; i++ ) {
        scanf( "%d", &fotons );
        
        if( abertura * fotons >= 40000000 )
            quantidadeEstrelasVisiveis += 1;
    }
    
    printf( "%d", quantidadeEstrelasVisiveis );

    return 0;
}