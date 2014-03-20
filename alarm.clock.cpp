// http://www.urionlinejudge.com.br/judge/en/problems/view/1103
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int h1, m1, h2, m2, dh, dm;
     
    while( cin >> h1 >> m1 >> h2 >> m2 && ( h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0 ) ) {
        if( m2 < m1 ) {
            h2 -= 1;
            dm = ( 60 + m2 ) - m1;
        }
        else {
            dm = m2 - m1;
        }
         
        if( h2 < h1 ) {
            dh = ( 24 + h2 ) - h1;
        }
        else {
            dh = h2 - h1;
        }
         
        printf( "%d\n", ( dh * 60 + dm ) );
    }
 
    return 0;
}