// http://www.urionlinejudge.com.br/judge/en/problems/view/1218
#include <stdio.h>
 
int main() {
 
    int n, a, qm, qf, t = 1;
    char c, d;
    bool primeiro = true;
     
    while( scanf( "%d", &n ) == 1 ) {
        qm = qf = 0;
         
        while( scanf( "%d %c%c", &a, &c, &d ) == 3 ) {
            if( a == n ) {
                if( c == 'M' ) qm += 1;
                else if( c == 'F' ) qf += 1;
            }
             
            if( d == '\n' ) break;
            fflush( stdin );
        }
         
        if( primeiro ) {
            printf( "Caso %d:\n", t++ );
            primeiro = false;
        }
        else {
            printf( "\nCaso %d:\n", t++ );
        }
         
        printf( "Pares Iguais: %d\n", ( qm + qf ) );
        printf( "F: %d\n", qf );
        printf( "M: %d\n", qm );
         
        fflush( stdin );
    }
 
    return 0;
}