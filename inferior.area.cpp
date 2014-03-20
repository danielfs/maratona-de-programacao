// http://www.urionlinejudge.com.br/judge/en/problems/view/1188
#include <stdio.h>
 
int main() {
 
    int quantidade = 0;
    char c;
    double n, matriz[ 12 ][ 12 ], resultado = 0;
 
    scanf( "%c\n", &c );
     
    for( int i = 0; i < 12; i++ ) {
        for( int j = 0; j < 12; j++ ) {
            scanf( "%lf", &n );
             
            matriz[ i ][ j ] = n;
        }
    }
     
    for( int i = 0; i < 12; i++ ) {
        for( int j = 12 - i; j < i; j++ ) {
            resultado += matriz[ i ][ j ];
             
            quantidade += 1;
        }
    }
     
    if( c == 'M' ) {
        resultado = resultado / quantidade;
    }
     
    printf( "%.1f\n", resultado );
 
    return 0;
}