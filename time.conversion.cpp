// http://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include <stdio.h>
 
int main() {
 
    int quantidadeSegundos, horas, minutos, segundos;
     
    scanf( "%d", &quantidadeSegundos );
     
    minutos = quantidadeSegundos / 60;
    quantidadeSegundos %= 60;
     
    segundos = quantidadeSegundos;
     
    horas = minutos / 60;
    minutos %= 60;
     
    printf( "%d:%d:%d\n", horas, minutos, segundos );
 
    return 0;
}