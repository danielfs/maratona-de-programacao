// http://www.urionlinejudge.com.br/judge/en/problems/view/1015
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int x1, y1, x2, y2, d1, d2;
    float distance;
     
    scanf( "%d %d", &x1, &y1 );
    scanf( "%d %d", &x2, &y2 );
     
    d1 = x2 - x1;
    d2 = y2 - y1;
     
    distance = sqrt( d1 * d1 + d2 * d2 );
     
    printf( "%.4f\n", distance );
 
    return 0;
}