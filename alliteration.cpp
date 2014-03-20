// http://www.urionlinejudge.com.br/judge/en/problems/view/1263
#include <iostream>
#include <string>
 
using namespace std;
 
void tratarLinha( string &linha ) {
 
    string::iterator it = linha.begin();
    string primeiros;
    primeiros.push_back( *it ); it++;
    char c;
    int contadorCaracteres = 1, contadorAliteracoes = 0;
     
    for( ; it != linha.end(); it++ ) {
        if( *it == ' ' ) {
            primeiros.push_back( *( it + 1 ) );
        }
    }
     
    for( int i = 0; i < primeiros.size(); i++ ) {
        primeiros[ i ] = ( char ) tolower( primeiros[ i ] );
    }
     
    it = primeiros.begin();
     
    c = *it; it++;
     
    for( ; it != primeiros.end(); it++ ) {
        if( *it == c ) {
            contadorCaracteres += 1;
        }
        else {
            if( contadorCaracteres > 1 ) {
                contadorAliteracoes += 1;
                contadorCaracteres = 1;
            }
             
            c = *it;
        }
    }
     
    if( contadorCaracteres > 1 ) {
        contadorAliteracoes += 1;
    }
     
    cout << contadorAliteracoes << endl;
}
 
int main() {
 
    string linha;
     
    while( getline( cin, linha ) ) {
        tratarLinha( linha );
    }
 
    return 0;
}