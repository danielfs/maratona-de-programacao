// http://www.urionlinejudge.com.br/judge/en/problems/view/1262
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int atualizaR( int &r, int processos ) {
 
    int q;
 
    if( r == 0 ) {
        return 0;
    }
    else if( r <= processos ) {
        q = 1;
    }
    else {
        q = r / processos;
         
        if( r % processos > 0 ) {
            q += 1;
        }
    }
     
    r = 0;
     
    return q;
}
 
void tratarLinha( string &palavra, int processos ) {
 
    int r;
    int c = 0;
    string::iterator it;
     
    r = 0;
     
    for( it = palavra.begin(); it != palavra.end(); it++ ) {
        if( *it == 'R' ) {
            r += 1;
        }
        else {
            c += atualizaR( r, processos );
        }
    }
     
    c += atualizaR( r, processos );
     
    for( it = palavra.begin(); it != palavra.end(); it++ ) {
        if( *it == 'W' ) {
            c += 1;
        }
    }
     
    cout << c << endl;
}
 
int main() {
 
    string palavra;
    int processos;
     
    while( cin >> palavra ) {
        cin >> processos;
         
        tratarLinha( palavra, processos );
    }
 
    return 0;
}