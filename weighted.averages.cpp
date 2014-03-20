// http://www.urionlinejudge.com.br/judge/en/problems/view/1079
#include <stdio.h>
 
int main() {
 
    int n;
    float numero1, numero2, numero3, media;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%f %f %f", &numero1, &numero2, &numero3 );
         
        media = ( ( numero1 * 2 ) + ( numero2 * 3 ) + ( numero3 * 5 ) ) / 10;
         
        printf( "%.1f\n", media );
    }
 
    return 0;
}