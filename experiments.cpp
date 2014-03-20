// http://www.urionlinejudge.com.br/judge/en/problems/view/1094
#include <stdio.h>
 
int main() {
 
    int n, totalCobaias = 0, totalCoelhos = 0, totalSapos = 0, totalRatos = 0, quantidade;
    char tipo;
    float percentualCoelhos, percentualSapos, percentualRatos;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d %c", &quantidade, &tipo );
         
        totalCobaias += quantidade;
         
        if( tipo == 'C' ) {
            totalCoelhos += quantidade;
        }
        else if( tipo == 'S' ) {
            totalSapos += quantidade;
        }
        else if( tipo == 'R' ) {
            totalRatos += quantidade;
        }
    }
     
    percentualCoelhos = ( float ) totalCoelhos * 100 / totalCobaias;
    percentualSapos = ( float ) totalSapos * 100 / totalCobaias;
    percentualRatos = ( float ) totalRatos * 100 / totalCobaias;
     
    printf( "Total: %d cobaias\n", totalCobaias );
    printf( "Total de coelhos: %d\n", totalCoelhos );
    printf( "Total de ratos: %d\n", totalRatos );
    printf( "Total de sapos: %d\n", totalSapos );
    printf( "Percentual de coelhos: %.2f %%\n", percentualCoelhos );
    printf( "Percentual de ratos: %.2f %%\n", percentualRatos );
    printf( "Percentual de sapos: %.2f %%\n", percentualSapos );
 
    return 0;
}