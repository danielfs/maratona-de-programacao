// http://www.urionlinejudge.com.br/judge/en/problems/view/1273
#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
     
    int n;
    bool primeiro = true;
     
    while( cin >> n && n != 0 ) {
        string *palavras = new string[ n ];
        int max = 0;
         
        for( int i = 0; i < n; i++ ) {
            cin >> palavras[ i ];
             
            int tamanho = palavras[ i ].size();
             
            if( tamanho > max ) max = tamanho;
        }
         
        if( primeiro ) primeiro = false;
        else cout << endl;
         
        for( int i = 0; i < n; i++ ) {
            cout << setw( max ) << palavras[ i ] << endl;
        }
    }
     
    return 0;
}