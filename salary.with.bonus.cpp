// http://www.urionlinejudge.com.br/judge/en/problems/view/1009
#include <iostream>
#include <stdio.h>
#include <string>
 
using namespace std;
 
int main() {
 
    string nome;
    float salarioBase, valorVendido;
     
    cin >> nome;
    cin >> salarioBase;
    cin >> valorVendido;
     
    printf( "TOTAL = R$ %.2f\n", ( salarioBase + 0.15 * valorVendido ) );
 
    return 0;
}