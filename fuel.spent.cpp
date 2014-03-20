// http://www.urionlinejudge.com.br/judge/en/problems/view/1017
#include <stdio.h>
 
int main() {
 
    int horas, velocidadeMedia;
    float distancia;
     
    scanf( "%d", &horas );
    scanf( "%d", &velocidadeMedia );
     
    distancia = horas * velocidadeMedia;
     
    printf( "%.3f\n", ( distancia / 12 ) );
 
    return 0;
}