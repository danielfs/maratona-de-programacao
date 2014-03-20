// http://br.spoj.com/problems/MINHOCA/
#include <iostream>

using namespace std;

int main() {
    int n, m, numero, maior = 0;
    
    cin >> n >> m;
    
    int matriz[ n ][ m ];
    
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < m; j++ ) {
            cin >> numero;
            
            matriz[ i ][ j ] = numero;
        }
    }
    
    for( int i = 0; i < n; i++ ) {
        int somaLinha = 0;
        
        for( int j = 0; j < m; j++ ) {
            somaLinha += matriz[ i ][ j ];
        }
        
        if( somaLinha > maior ) maior = somaLinha;
    }
    
    for( int i = 0; i < m; i++ ) {
        int somaColuna = 0;
        
        for( int j = 0; j < n; j++ ) {
            somaColuna += matriz[ j ][ i ];
        }
        
        if( somaColuna > maior ) maior = somaColuna;
    }
    
    cout << maior << endl;
    
    return 0;
}