// http://www.urionlinejudge.com.br/judge/en/problems/view/1182
#include <stdio.h>
 
int main() {
 
    int col;
    char c;
    double n, matriz[ 12 ][ 12 ], resultado = 0;
     
    scanf( "%d\n", &col );
    scanf( "%c\n", &c );
     
    for( int i = 0; i < 12; i++ ) {
        for( int j = 0; j < 12; j++ ) {
            scanf( "%lf", &n );
             
            matriz[ i ][ j ] = n;
        }
    }
     
    for( int i = 0; i < 12; i++ ) {
        resultado += matriz[ i ][ col ];
    }
     
    if( c == 'M' ) {
        resultado = resultado / 12;
    }
     
    printf( "%.1f\n", resultado );
 
    return 0;
}