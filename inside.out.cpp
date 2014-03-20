// http://www.urionlinejudge.com.br/judge/en/problems/view/1235
#include <iostream>
#include <string>
 
using namespace std;
 
void tratarPalavra( string &w ) {
    int meio = w.size() / 2;
     
    for( int i = meio - 1; i >= 0; i-- ) {
        cout << w[ i ];
    }
     
    for( int i = w.size() - 1; i >= meio; i-- ) {
        cout << w[ i ];
    }
     
    cout << endl;
}
 
int main() {
    int n;
    string w;
     
    cin >> n;
     
    cin.ignore();
     
    for( int i = 0; i < n; i++ ) {
        getline( cin, w );
         
        tratarPalavra( w );
    }
}