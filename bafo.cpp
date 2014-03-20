// http://br.spoj.com/problems/BAFO/
#include <iostream>

using namespace std;

int main() {
    int r, a, b, t = 1;
    
    while( cin >> r && r != 0 ) {
        
        cout << "Teste " << t << endl;
        
        int sa = 0, sb = 0;
        
        for( int i = 0; i < r; i++ ) {
            cin >> a >> b;
            
            sa += a;
            sb += b;
        }
        
        if( sa > sb ) {
            cout << "Aldo" << endl;
        }
        else {
            cout << "Beto" << endl;
        }
        
        cout << endl;
        t += 1;
    }
    
    return 0;
}