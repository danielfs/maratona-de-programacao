// http://www.urionlinejudge.com.br/judge/en/problems/view/1046
#include <stdio.h>
 
int main() {
 
    int inicio, fim, diferenca = 0;
     
    scanf( "%d %d", &inicio, &fim );
     
    if( inicio <= fim ) {
        diferenca = fim - inicio;
    }
    else {
        diferenca = 24 - ( inicio - fim );
    }
     
    printf( "O JOGO DUROU %d HORA(S)\n", diferenca );
     
    return 0;
}