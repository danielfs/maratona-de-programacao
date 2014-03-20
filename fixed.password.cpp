// http://www.urionlinejudge.com.br/judge/en/problems/view/1114
#include <stdio.h>
 
int main() {
 
    int senha;
     
    while( scanf( "%d", &senha ) == 1 && senha != 2002 ) {
        printf( "Senha Invalida\n" );
    }
     
    printf( "Acesso Permitido\n" );
 
    return 0;
}