// http://www.urionlinejudge.com.br/judge/en/problems/view/1196
#include <stdio.h>
#include <ctype.h>
 
int main() {
 
    char c;
     
    while( scanf( "%c", &c ) == 1 ) {
        if( c == '\n' || c == ' ' ) {
            printf( "%c", c );
        }
        else if( isdigit( c ) ) {
            if( c == '0' ) {
                printf( "9" );
            }
            else if( c == '1' ) {
                printf( "`" );
            }
            else {
                printf( "%d", ( c - '0' ) - 1 );
            }
        }
        else {
            if( c == '-' ) printf( "0" );
            if( c == '=' ) printf( "-" );
            if( c == 'W' ) printf( "Q" );
            if( c == 'E' ) printf( "W" );
            if( c == 'R' ) printf( "E" );
            if( c == 'T' ) printf( "R" );
            if( c == 'Y' ) printf( "T" );
            if( c == 'U' ) printf( "Y" );
            if( c == 'I' ) printf( "U" );
            if( c == 'O' ) printf( "I" );
            if( c == 'P' ) printf( "O" );
            if( c == '[' ) printf( "P" );
            if( c == ']' ) printf( "[" );
            if( c == '\\' ) printf( "]" );
            if( c == 'S' ) printf( "A" );
            if( c == 'D' ) printf( "S" );
            if( c == 'F' ) printf( "D" );
            if( c == 'G' ) printf( "F" );
            if( c == 'H' ) printf( "G" );
            if( c == 'J' ) printf( "H" );
            if( c == 'K' ) printf( "J" );
            if( c == 'L' ) printf( "K" );
            if( c == ';' ) printf( "L" );
            if( c == '\'' ) printf( ";" );
            if( c == 'X' ) printf( "Z" );
            if( c == 'C' ) printf( "X" );
            if( c == 'V' ) printf( "C" );
            if( c == 'B' ) printf( "V" );
            if( c == 'N' ) printf( "B" );
            if( c == 'M' ) printf( "N" );
            if( c == ',' ) printf( "M" );
            if( c == '.' ) printf( "," );
            if( c == '/' ) printf( "." );
        }
         
    }
 
    return 0;
}