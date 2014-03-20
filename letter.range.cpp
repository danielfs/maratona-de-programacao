// http://www.urionlinejudge.com.br/judge/en/problems/view/1276
#include <stdio.h>
 
void limparAlfabeto( bool *alfabeto ) {
    for( int i = 0; i < 26; i++ )
        alfabeto[ i ] = false;
}
 
void imprimirIntervalos( bool *alfabeto ) {
    int i = 0, j = 0;
    bool primeiro = true;
     
    while( i < 26 && j < 26 ) {
        while( !alfabeto[ i ] && i < 26 ) i++;
        j = i;
        while( alfabeto[ j + 1 ] && j < 26 ) j++;
         
        if( alfabeto[ i ] && alfabeto[ j ] ) {
            if( primeiro ) {
                printf( "%c:%c", i + 97, j + 97 );
                primeiro = false;
            }
            else {
                printf( ", %c:%c", i + 97, j + 97 );
            }
        }
         
        i = j + 1;
    }
     
    printf( "\n" );
}
 
int main() {
     
    char c;
    bool *alfabeto = new bool[ 26 ];
    int counter = 0;
     
    limparAlfabeto( alfabeto );
     
    while( scanf( "%c", &c ) == 1 ) {
        if( c == ' ' ) continue;
        else if( c == '\n' ) {
             
            if( counter == 0 ) {
                printf( "\n" );
            }
            else {
                imprimirIntervalos( alfabeto );
                limparAlfabeto( alfabeto );
            }
             
            counter = 0;
        }
        else if( c >= 97 && c <= 122 ) {
            alfabeto[ c - 97 ] = true;
            counter += 1;
        }
    }
     
    return 0;
}