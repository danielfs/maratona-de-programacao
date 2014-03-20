// http://www.urionlinejudge.com.br/judge/en/problems/view/1300
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int d;
     
    while( scanf( "%d\n", &d ) == 1 ) {
        if( d % 6 == 0 ) {
            printf( "Y\n" );
        }
        else {
            printf( "N\n" );
        }
    }
 
    return 0;
}