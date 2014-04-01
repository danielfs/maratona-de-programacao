// http://www.urionlinejudge.com.br/judge/en/problems/view/1540
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for( int i = 0; i < n; i++ ) {
        double a, b, c, d;
        
        cin >> a >> b >> c >> d;
        
        double media = ( ( d - b ) / ( c - a ) );
        
        char buff[ 50 ];
        sprintf( buff, "%lf", media );
        
        for( int j = 0; j < 50; j++ ) {
            
            if( buff[ j ] != '.' ) {
                cout << buff[ j ];
            }
            else {
                cout << ",";
                
                for( int k = j + 1; k < j + 3; k++ ) {
                    cout << buff[ k ];
                }
                
                cout << "\n";
                
                break;
            }
            
        }
    }
    
    return 0;
}