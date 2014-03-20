// http://www.urionlinejudge.com.br/judge/en/problems/view/1239
#include <iostream>
#include <string>
 
using namespace std;
 
void tratarTexto( string &s ) {
     
    bool fecharItalico = false;
    bool fecharNegrito = false;
     
    for( int i = 0; i < s.size(); i++ ) {
        char c = s[ i ];
         
        if( c == '_' ) {
            if( fecharItalico ) {
                cout << "</i>";
                fecharItalico = false;
            }
            else {
                cout << "<i>";
                fecharItalico = true;
            }
        }
        else if( c == '*' ) {
            if( fecharNegrito ) {
                cout << "</b>";
                fecharNegrito = false;
            }
            else {
                cout << "<b>";
                fecharNegrito = true;
            }
        }
        else {
            cout << c;
        }
    }
     
    cout << endl;
}
 
int main() {
     
    string s;
     
    while( getline( cin, s ) ) {
         
        tratarTexto( s );
    }
     
    return 0;
}