// http://www.urionlinejudge.com.br/judge/en/problems/view/1051
#include <stdio.h>
 
int main() {
 
    float salario, tax = 0.0;
     
    scanf( "%f", &salario );
     
    if( salario <= 2000.0 ) {
        printf( "Isento\n" );
    }
    else {
        salario -= 2000.0;
         
        if( salario <= 999.99 ) {
            tax += ( salario * 0.08 );
        }
        else {
            tax += 80.0;
             
            salario -= 1000.0;
             
            if( salario <= 1499.99 ) {
                tax += ( salario * 0.18 );
            }
            else {
                tax += ( 1500.00 * 0.18 );
                 
                salario -= 1500.00;
                 
                if( salario > 0 ) {
                    tax += ( salario * 0.28 );
                }
            }
        }
    }
     
    printf( "R$ %.2f\n", tax );
 
    return 0;
}