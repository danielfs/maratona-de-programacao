// http://www.urionlinejudge.com.br/judge/en/problems/view/1020
#include <stdio.h>
 
int main() {
 
    int quantidadeDias, ano, mes, dia;
     
    scanf( "%d", &quantidadeDias );
     
    ano = quantidadeDias / 365;
    quantidadeDias %= 365;
     
    mes = quantidadeDias / 30;
    quantidadeDias %= 30;
     
    dia = quantidadeDias;
     
    printf( "%d ano(s)\n", ano );
    printf( "%d mes(es)\n", mes );
    printf( "%d dia(s)\n", dia );
 
    return 0;
}