// http://www.urionlinejudge.com.br/judge/en/problems/view/1131
#include <stdio.h>
 
int main() {
 
    int internacional, gremio, empates = 0, quantidade = 0, vitoriasInternacional = 0, vitoriasGremio = 0, escolha;
     
    do {
        scanf( "%d %d", &internacional, &gremio );
         
        if( internacional > gremio ) {
            vitoriasInternacional += 1;
        }
        else if( gremio > internacional ) {
            vitoriasGremio += 1;
        }
        else if( gremio == internacional ) {
            empates += 1;
        }
         
        quantidade += 1;
         
        printf( "Novo grenal (1-sim 2-nao)\n" );
         
    } while( scanf( "%d", &escolha ) == 1 && escolha == 1 );
     
    printf( "%d grenais\n", quantidade );
    printf( "Inter:%d\n", vitoriasInternacional );
    printf( "Gremio:%d\n", vitoriasGremio );
    printf( "Empates:%d\n", empates );
     
    if( vitoriasInternacional > vitoriasGremio ) {
        printf( "Inter venceu mais\n" );
    }
    else if( vitoriasGremio > vitoriasInternacional ) {
        printf( "Gremio venceu mais\n" );
    }
    else if( vitoriasGremio == vitoriasInternacional ) {
        printf( "Nao houve vencedor\n" );
    }
 
    return 0;
}