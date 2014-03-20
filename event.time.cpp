// http://www.urionlinejudge.com.br/judge/en/problems/view/1061
#include <stdio.h>
 
using namespace std;
 
int diaInicial, diaFinal;
int horaInicial, horaFinal;
int minutoInicial, minutoFinal;
int segundoInicial, segundoFinal;
int diferencaDia, diferencaHora, diferencaMinuto, diferencaSegundo;
 
void retiraDia() {
    diaFinal -= 1;
}
 
void retiraHora() {
    if( horaFinal > 0 ) {
        horaFinal -= 1;
    }
    else {
        retiraDia();
        horaFinal = 23;
    }
}
 
void retiraMinuto() {
    if( minutoFinal > 0 ) {
        minutoFinal -= 1;
    }
    else {
        retiraHora();
        minutoFinal = 59;
    }
}
 
int main() {
 
    scanf( "Dia %2d\n", &diaInicial );
 
    scanf( "%02d : %02d : %02d\n", &horaInicial, &minutoInicial, &segundoInicial );
 
    scanf( "Dia %d\n", &diaFinal );
 
    scanf( "%02d : %02d : %02d\n", &horaFinal, &minutoFinal, &segundoFinal );
     
    if( segundoInicial <= segundoFinal ) {
        diferencaSegundo = segundoFinal - segundoInicial;
    }
    else {
     
        retiraMinuto();
         
        diferencaSegundo = 60 + segundoFinal - segundoInicial;
    }
     
    if( minutoInicial <= minutoFinal ) {
         
        diferencaMinuto = minutoFinal - minutoInicial;
    }
    else {
     
        retiraHora();
         
        diferencaMinuto = 60 + minutoFinal - minutoInicial;
    }
     
    if( horaInicial <= horaFinal ) {
     
        diferencaHora = horaFinal - horaInicial;
    }
    else {
     
        retiraDia();
         
        diferencaHora = 24 + horaFinal - horaInicial;
    }
     
    diferencaDia = diaFinal - diaInicial;
     
    printf( "%d dia(s)\n", diferencaDia );
    printf( "%d hora(s)\n", diferencaHora );
    printf( "%d minuto(s)\n", diferencaMinuto );
    printf( "%d segundo(s)\n", diferencaSegundo );
     
    return 0;
}