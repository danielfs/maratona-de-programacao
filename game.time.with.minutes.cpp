// http://www.urionlinejudge.com.br/judge/en/problems/view/1047
#include <stdio.h>
 
int main() {
 
    int horaInicial, minutoInicial, horaFinal, minutoFinal, diferencaHora, diferencaMinuto;
     
    scanf( "%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal );
     
    if( horaInicial <= horaFinal && minutoInicial <= minutoFinal ) {
        diferencaHora = horaFinal - horaInicial;
        diferencaMinuto = minutoFinal - minutoInicial;
    }
    else {
        if( horaInicial < horaFinal && minutoInicial > minutoFinal ) {
            diferencaHora = horaFinal - ( horaInicial + 1 );
            diferencaMinuto = 60 - minutoInicial + minutoFinal;
        }
        else {
            if( horaInicial > horaFinal && minutoInicial < minutoFinal ) {
                diferencaHora = 24 - ( horaInicial - horaFinal );
                diferencaMinuto = minutoFinal - minutoInicial;
            }
            else {
                if( horaInicial > horaFinal && minutoInicial > minutoFinal ) {
                    diferencaHora = 24 - ( horaInicial - ( horaFinal - 1 ) );
                    diferencaMinuto = 60 - minutoInicial + minutoFinal;
                }
            }
        }
    }
     
    printf( "O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diferencaHora, diferencaMinuto );
 
    return 0;
}