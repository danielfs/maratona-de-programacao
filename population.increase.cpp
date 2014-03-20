// http://www.urionlinejudge.com.br/judge/en/problems/view/1160
#include <stdio.h>
 
int main() {
    int n, anos;
    float taxaA, taxaB;
    long long populacaoA, populacaoB;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
     
        anos = 0;
     
        scanf( "%lld %lld %f %f", &populacaoA, &populacaoB, &taxaA, &taxaB );
         
        while( populacaoA <= populacaoB ) {
            populacaoA += ( ( int ) ( populacaoA * ( taxaA / 100 ) ) );
            populacaoB += ( ( int ) ( populacaoB * ( taxaB / 100 ) ) );
             
            anos += 1;
             
            if( anos > 100 ) {
                break;
            }
        }
         
        if( anos > 100 ) {
            printf( "Mais de 1 seculo.\n" );
        }
        else {
            printf( "%d anos.\n", anos );
        }
    }
     
    return 0;
}