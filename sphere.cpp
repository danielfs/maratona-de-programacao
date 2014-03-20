// http://www.urionlinejudge.com.br/judge/en/problems/view/1011
#include <stdio.h>
 
int main() {
 
    int raio;
    float volume;
     
    scanf( "%d", &raio );
     
    volume = 3.14159 * raio * raio * raio * 4 / 3;
     
    printf( "VOLUME = %.3f\n", volume );
 
    return 0;
}