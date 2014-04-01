// http://www.urionlinejudge.com.br/judge/en/problems/view/1541

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, porcentagem;
    
    while( cin >> a && a != 0 ) {
        cin >> b >> porcentagem;
        
        int x = sqrt( ( a * b ) / ( porcentagem / 100 ) );
        
        cout << x << endl;
    }
    
    return 0;
}