// http://www.urionlinejudge.com.br/judge/en/problems/view/1245
#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
 
    int n, t;
    char l;
     
    while( cin >> n ) {
        map<int, int> esquerdo;
        map<int, int> direito;
        map<int, int>::iterator it;
        int pares = 0;
         
        for( int i = 0; i < n; i++ ) {
            cin >> t >> l;
         
            if( l == 'E' ) esquerdo[ t ] += 1;
            else if( l == 'D' ) direito[ t ] += 1;
        }
         
        for( it = esquerdo.begin(); it != esquerdo.end(); it++ ) {
            int quantidade = it->second;
            int tamanho = it->first;
             
            if( quantidade > 0 ) {
                if( direito[ tamanho ] > 0 ) {
                    pares += ( quantidade < direito[ tamanho ] ? quantidade : direito[ tamanho ] );
                }
            }
        }
         
        cout << pares << endl;
    }
 
    return 0;
}