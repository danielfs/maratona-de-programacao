// http://www.urionlinejudge.com.br/judge/en/problems/view/1048
#include <stdio.h>
 
int main() {
 
    float salario, aumento, porcentagem;
     
    scanf( "%f", &salario );
     
    if( salario <= 400.0 ) {
        porcentagem = 0.15;
    }
    else if( salario <= 800.0 ) {
        porcentagem = 0.12;
    }
    else if( salario <= 1200.0 ) {
        porcentagem = 0.1;
    }
    else if( salario <= 2000.0 ) {
        porcentagem = 0.07;
    }
    else {
        porcentagem = 0.04;
    }
     
    aumento = salario * porcentagem;
     
    printf( "Novo salario: %.2f\n", ( salario + aumento ) );
    printf( "Reajuste ganho: %.2f\n", aumento );
    printf( "Em percentual: %.0f %%\n", porcentagem * 100 );
 
    return 0;
}