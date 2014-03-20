// http://www.urionlinejudge.com.br/judge/en/problems/view/1222
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int caracteresPorLinha, linhasPorPagina, palavras, espaco;
    int contadorCaracteres, contadorLinhas, contadorPaginas, tamanhoPalavra;
    string w;
     
    while( cin >> palavras >> linhasPorPagina >> caracteresPorLinha ) {
     
        contadorCaracteres = contadorLinhas = contadorPaginas = 0;
     
        for( int i = 1; i <= palavras; i++ ) {
            cin >> w;
             
            if( i < palavras ) espaco = 1;
            else espaco = 0;
             
            tamanhoPalavra = w.size();
             
            contadorCaracteres += tamanhoPalavra;
             
            if( contadorCaracteres < caracteresPorLinha ) {
                contadorCaracteres += espaco;
            }
            else if( contadorCaracteres == caracteresPorLinha ) {
                contadorLinhas += 1;
                contadorCaracteres = 0;
            }
            else if( contadorCaracteres > caracteresPorLinha ) {
                contadorLinhas += 1;
                contadorCaracteres = tamanhoPalavra + espaco;
            }
        }
         
        if( contadorCaracteres > 0 ) contadorLinhas += 1;
         
        contadorPaginas = contadorLinhas / linhasPorPagina;
         
        if( contadorLinhas % linhasPorPagina != 0 ) contadorPaginas += 1;
         
        cout << contadorPaginas << endl;
    }
 
    return 0;
}