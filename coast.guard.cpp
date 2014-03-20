// http://www.urionlinejudge.com.br/judge/en/problems/view/1247
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int d, vf, vg;
     
    while( scanf( "%d %d %d", &d, &vf, &vg ) == 3 ) {
        float a = sqrt( 144 + d * d );
         
        float tf, tg;
         
        tf = 12000.0 / vf;
        tg = ( a * 1000 ) / vg;
         
        if( tg <= tf ) {
            printf( "S\n" );
        }
        else {
            printf( "N\n" );
        }
    }
 
    return 0;
}