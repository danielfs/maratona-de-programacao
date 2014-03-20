// http://www.urionlinejudge.com.br/judge/en/problems/view/1212
#include <iostream>
#include <string>
 
using namespace std;
 
int contarCarry( string &a, string &b ) {
     
    int contador = 0, contadorAnterior = 0;
    string::reverse_iterator ita, itb;
    bool pa = true, pb = true;
     
    ita = a.rbegin();
    itb = b.rbegin();
     
    while( ita != a.rend() || itb != b.rend() ) {
        char ca = '0', cb = '0';
         
        if( pa ) ca = *ita;
        if( pb ) cb = *itb;
         
        int ia = ca - '0';
        int ib = cb - '0';
        int ir = ia + ib + contadorAnterior;
         
        if( ir > 9 ) {
            contadorAnterior = 1;
        }
        else {
            contadorAnterior = 0;
        }
         
        contador += contadorAnterior;
         
        if( pa ) ita++;
        if( pb ) itb++;
         
        if( ita == a.rend() ) {
            pa = false;
            ca = *ita;
        }
        if( itb == b.rend() ) {
            pb = false;
            cb = *itb;
        }
    }
     
    return contador;
}
 
int main() {
 
    string a, b;
    string::reverse_iterator ia, ib;
    int carryCount;
     
    while( cin >> a >> b && ( a != "0" || b != "0" ) ) {
        carryCount = contarCarry( a, b );
         
        if( carryCount == 0 ) {
            cout << "No carry operation." << endl;
        }
        else if( carryCount == 1 ) {
            cout << "1 carry operation." << endl;
        }
        else if( carryCount > 1 ) {
            cout << carryCount << " carry operations." << endl;
        }
    }
 
    return 0;
}