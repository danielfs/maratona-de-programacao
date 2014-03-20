// http://www.urionlinejudge.com.br/judge/en/problems/view/1068
#include <stdio.h>
 
int main() {
 
    char c;
    int abertos = 0;
    bool correto = true;
     
    while( scanf( "%c", &c ) == 1 ) {
         
        if( c == ')' ) {
            abertos -= 1;
             
            if( abertos < 0 )
                correto = false;
        }
        else if( c == '(' ) {
            abertos += 1;
        }
        else if( c == '\n' ) {
            if( correto && abertos == 0 ) {
                printf( "correct\n" );
            }
            else {
                printf( "incorrect\n" );
            }
             
            abertos = 0;
            correto = true;
        }
    }
 
    return 0;
}