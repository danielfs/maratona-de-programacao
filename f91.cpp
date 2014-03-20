// http://br.spoj.com/problems/F91/
#include <stdio.h>

int f91( int n ) {
    if( n <= 100 )
        return f91( f91( n + 11 ) );
    else
        return n - 10;
}

int main() {
    int numero, resultado;
    
    while( scanf( "%d", &numero ) == 1 && numero != 0 ) {
        resultado = f91( numero );
        
        printf( "f91(%d) = %d\n", numero, resultado );
    }

    return 0;
}