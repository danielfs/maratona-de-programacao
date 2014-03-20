// http://www.urionlinejudge.com.br/judge/en/problems/view/1099
#include <stdio.h>
 
int maiorNumero( int x1, int x2 ) {
    if( x1 > x2 ) {
        return x1;
    }
    else {
        return x2;
    }
}
 
int somaDosNumerosImparesConsecutivos( int x1, int x2 ) {
    int maior, menor, soma = 0;
     
    maior = maiorNumero( x1, x2 );
    menor = x1 + x2 - maior;
     
    menor += 1;
    maior -= 1;
     
    if( menor % 2 == 0 ) {
        menor += 1;
    }
     
    if( maior % 2 == 0 ) {
        maior -= 1;
    }
     
    for( int i = menor; i <= maior; i += 2 ) {
        soma += i;
    }
     
    return soma;
}
 
int main() {
 
    int n, x1, x2, soma;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d %d", &x1, &x2 );
        soma = somaDosNumerosImparesConsecutivos( x1, x2 );
         
        printf( "%d\n", soma );
    }
     
    return 0;
}