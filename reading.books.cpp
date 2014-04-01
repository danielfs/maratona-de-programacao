// http://www.urionlinejudge.com.br/judge/en/problems/view/1542

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    double q, d, p, x;
    
    while( cin >> q && q != 0 ) {
        cin >> d >> p;
        
        x = q * ( ( -p * d ) / ( q - p ) );
        
        int r = x;
        
        printf( "%d pagina%s", r, r > 1 ? "s\n" : "\n" );
    }
    
    return 0;
}