// http://www.urionlinejudge.com.br/judge/en/problems/view/1043
#include <stdio.h>
 
int main() {
 
    float a, b, c;
     
    scanf( "%f %f %f", &a, &b, &c );
     
    if( a < ( b + c ) && b < ( a + c ) && c < ( a + b ) ) {
        float perimetro = a + b + c;
         
        printf( "Perimetro = %2.1f\n", perimetro );
    }
    else {
        float area = ( ( a + b ) * c ) / 2;
         
        printf( "Area = %2.1f\n", area );
    }
 
    return 0;
}