// http://www.urionlinejudge.com.br/judge/en/problems/view/1129
#include <stdio.h>
 
int main() {
 
    int n;
     
    while( scanf( "%d", &n ) == 1 && n != 0 ) {
        for( int i = 0; i < n; i++ ) {
         
            int a;
            char c = ' ';
         
            for( int i = 0; i < 5; i++ ) {
                scanf( "%d", &a );
                 
                if( a <= 127 ) {
                    if( c == ' ' ) {
                        if( i == 0 ) c = 'A';
                        else if( i == 1 ) c = 'B';
                        else if( i == 2 ) c = 'C';
                        else if( i == 3 ) c = 'D';
                        else if( i == 4 ) c = 'E';
                    }
                    else {
                        c = '*';
                    }
                }
            }
             
            if( c == ' ' ) c = '*';
             
            printf( "%c\n", c );
        }
    }
 
    return 0;
}