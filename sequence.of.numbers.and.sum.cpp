// http://www.urionlinejudge.com.br/judge/en/problems/view/1101
#include <stdio.h>
 
int maiorNumero( int a, int b ) {
    if( a > b ) {
        return a;
    }
    else {
        return b;
    }
}
 
void printInterval( int a, int b ) {
    int maior, menor, soma = 0;
     
    maior = maiorNumero( a, b );
    menor = a + b - maior;
     
    for( int i = menor; i <= maior; i++ ) {
        printf( "%d ", i );
         
        soma += i;
    }
     
    printf( "Sum=%d\n", soma );
}
 
int main() {
 
    int a, b;
     
    while( scanf( "%d %d", &a, &b ) == 2 && a != 0 && b != 0 ) {
        printInterval( a, b );
    }
 
    return 0;
}