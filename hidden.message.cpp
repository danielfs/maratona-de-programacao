// http://www.urionlinejudge.com.br/judge/en/problems/view/1272
#include <iostream>
#include <string>
 
using namespace std;
 
void tratarLinha( string &linha ) {
    string hiddenMessage;
    string::iterator it;
    bool podeGravar = true;
     
    for( it = linha.begin(); it != linha.end(); it++ ) {
        if( *it != ' ' ) {
            if( podeGravar ) {
                hiddenMessage.push_back( *it );
                podeGravar = false;
            }
        }
        else {
            podeGravar = true;
        }
    }
     
    cout << hiddenMessage << endl;
}
 
int main() {
 
    int t;
    string linha;
     
    while( cin >> t ) {
         
        cin.ignore();
         
        for( int i = 0; i < t; i++ ) {
            getline( cin, linha );
            tratarLinha( linha );
        }
    }
 
    return 0;
}