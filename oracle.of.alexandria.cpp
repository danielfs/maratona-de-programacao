// http://www.urionlinejudge.com.br/judge/en/problems/view/1457
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int t;
     
    cin >> t;
     
    for( int i = 0; i < t; i++ ) {
        int n;
        long long fatorial = 1;
        string exclamacoes;
         
        cin >> n >> exclamacoes;
         
        int k = exclamacoes.size();
         
        int j = 0;
         
        while( n - j * k >= 1 ) {
            fatorial *= ( n - j * k );
            j += 1;
        }
         
        cout << fatorial << endl;
    }
     
    return 0;
}