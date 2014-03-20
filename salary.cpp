// http://www.urionlinejudge.com.br/judge/en/problems/view/1008
#include <stdio.h>
 
int main() {
 
    int numero, horas;
    float recebePorHora, salario;
     
    scanf( "%d", &numero );
    scanf( "%d", &horas );
    scanf( "%f", &recebePorHora );
     
    salario = horas * recebePorHora;
     
    printf ( "NUMBER = %d\n", numero );
    printf ( "SALARY = U$ %.2f\n", salario );
 
    return 0;
}