// http://www.urionlinejudge.com.br/judge/en/problems/view/1267
#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, d;
     
    while( cin >> n >> d && n != 0 ) {
        int x[ d ][ n ];
        int q = 0;
         
        for( int i = 0; i < d; i++ ) {
            for( int j = 0; j < n; j++ ) {
                cin >> x[ i ][ j ];
            }
        }
         
        for( int i = 0; i < n; i++ ) {
         
            q = 0;
         
            for( int j = 0; j < d; j++ ) {
                if( x[ j ][ i ] == 1 ) q += 1;
            }
             
            if( q == d ) break;
        }
         
        if( q == d ) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
 
    return 0;
}