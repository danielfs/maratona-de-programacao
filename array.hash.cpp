// http://www.urionlinejudge.com.br/judge/en/problems/view/1257
#include <iostream>
#include <string>
 
using namespace std;
 
int calcularLinha( string &w, int e ) {
     
    int soma = 0;
     
    for( int i = 0; i < w.size(); i++ ) {
        soma += ( e + i + ( w[ i ] - 65 ) );
    }    
     
    return soma;
}
 
int main() {
 
    int testes, e, linhas, soma;
    string w;
     
    cin >> testes;
     
    for( int t = 0; t < testes; t++ ) {
        cin >> linhas;
         
        cin.ignore();
         
        soma = 0;
         
        for( e = 0; e < linhas; e++ ) {
            getline( cin, w );
             
            soma += ( calcularLinha( w, e ) );
        }
         
        cout << soma << endl;
    }
 
    return 0;
}