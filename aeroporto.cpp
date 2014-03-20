// http://br.spoj.com/problems/AERO/ 
#include <stdio.h>

int main() {
    unsigned short int aeroportos, voos, x, y, maior, testes = 1;

    while( scanf( "%hd %hd", &aeroportos, &voos ) == 2 && aeroportos != 0 ) {
        unsigned short int quantidadeVoos[ aeroportos ];

        // limpar valores
        for( char i = 0; i < aeroportos; i++ ) {
            quantidadeVoos[ i ] = 0;
        }

        maior = 0;

        // ler valores
        for( char i = 0; i < voos; i++ ) {
            scanf( "%hd %hd", &x, &y);

            quantidadeVoos[ x - 1 ] += 1;
            quantidadeVoos[ y - 1 ] += 1;

            if( quantidadeVoos[ x - 1 ] > maior )
                maior = quantidadeVoos[ x - 1 ];

            if( quantidadeVoos[ y - 1 ] > maior )
                maior = quantidadeVoos[ y - 1 ];
        }

        // imprimir valores
        printf( "Teste %hd\n", testes++ );

        for( char i = 0; i < aeroportos; i++ )
            if( quantidadeVoos[ i ] == maior )
                printf( "%hd ", ( i + 1 ) );

        printf( "\n\n" );
    }

    return 0;
}