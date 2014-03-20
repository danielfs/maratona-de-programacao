// http://www.urionlinejudge.com.br/judge/en/problems/view/1441
#include <iostream>

using namespace std;

int main() {
    long h, maior;
    
    while( cin >> h && h != 0 ) {
        maior = h;
        
        while( h != 1 ) {
            if( h % 2 == 0 ) {
                h = h / 2;
            }
            else {
                h = 3 * h + 1;
            }
            
            if( h > maior ) {
                maior = h;
            }
        }
        
        cout << maior << endl;
    }
    
    return 0;
}