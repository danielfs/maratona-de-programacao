// http://www.urionlinejudge.com.br/judge/en/problems/view/1216
#include <iostream>
#include <string>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int numero = 0, quantidade = 0;
    double media = 0.0, soma = 0.0;
    string nome;
     
    while( getline( cin, nome ) ) {
         
        cin >> numero;
         
        soma += numero;
        quantidade += 1;
         
        getchar();
         
        cin.ignore();
    }
     
    media = soma / quantidade;
     
    printf( "%.1f\n", media );
 
    return 0;
}