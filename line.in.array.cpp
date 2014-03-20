// http://www.urionlinejudge.com.br/judge/en/problems/view/1181
#include <stdio.h>
 
int main() {
 
    int l;
    char c;
    double n, matriz[ 12 ][ 12 ], resultado = 0;
     
    scanf( "%d\n", &l );
    scanf( "%c\n", &c );
     
    for( int i = 0; i < 12; i++ ) {
        for( int j = 0; j < 12; j++ ) {
            scanf( "%lf", &n );
             
            matriz[ i ][ j ] = n;
        }
    }
     
    for( int i = 0; i < 12; i++ ) {
        resultado += matriz[ l ][ i ];
    }
     
    if( c == 'M' ) {
        resultado = resultado / 12;
    }
     
    printf( "%.1f\n", resultado );
 
    return 0;
}