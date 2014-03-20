// http://br.spoj.com/problems/PEDAGIO/
#include <stdio.h>
#include <queue>

using namespace std;

bool vizinhos[ 51 ][ 51 ];
bool visitado[ 51 ];
int largura[ 51 ];

void limparMatrizes( int cidades ) {
    for( int i = 0; i < cidades; i++ ) {
        for( int j = 0; j < cidades; j++) {
            vizinhos[ i ][ j ] = false;
        }
        visitado[ i ] = false;
        largura[ i ] = 0;
    }
}

void buscaLargura( int atual, int pedagios, int cidades ) {
    queue< int > fila;
    
    fila.push( atual );
    visitado[ atual ] = true;
    largura[ atual ] = 0;
    
    while( !fila.empty() ) {
        int v = fila.front();
        fila.pop();
        
        for( int i = 0; i < cidades; i++ ) {
            if( ( vizinhos[ v ][ i ] || vizinhos[ i ][ v ] ) && !visitado[ i ] ) {
                fila.push( i );
                visitado[ i ] = true;
                largura[ i ] = largura[ v ] + 1;
            }
        }
    }
}

void imprimeVisitados( int cidades, int atual, int pedagios ) {
    for( int i = 0; i < cidades; i++ ) {
        if( visitado[ i ] && i != atual && largura[ i ] <= pedagios ) {
            printf("%d ", ( i + 1 ) );
        }
    }
}

int main() {
    int cidades, estradas, atual, pedagios, testes = 1;
    
    while( scanf("%d %d %d %d", &cidades, &estradas, &atual, &pedagios) == 4 && cidades != 0 ) {
        int x, y;
        
        limparMatrizes( cidades );
        
        for( int i = 0; i < estradas; i++ ) {
            scanf("%d %d", &x, &y);
            
            vizinhos[ x - 1 ][ y - 1 ] = true;
            vizinhos[ y - 1 ][ x - 1 ] = true;
        }
        
        buscaLargura( atual - 1, pedagios, cidades );
        
        printf( "Teste %d\n", testes++ );
        imprimeVisitados( cidades, atual - 1, pedagios );
        printf("\n\n");
    }
    
    return 0;
}