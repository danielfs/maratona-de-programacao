// http://br.spoj.com/problems/OBIHANOI/
#include <iostream>

using namespace std;

long resultado[ 30 ];

int hanoi( int n ) {
    if( resultado[ n - 1 ] != 0 )
        return resultado[ n - 1 ];
    else {
        int total = 0;
        total += hanoi( n - 1 );
        total += 1;
        total += hanoi( n - 1 );
        
        resultado[ n - 1 ] = total;
        
        return total;
    }
}

int main() {
    int n, t = 1;
    
    for( int i = 0; i < 30; i++ ) resultado[ i ] = 0;
    resultado[ 0 ] = 1;
    
    while( cin >> n && n != 0 ) {
        cout << "Teste " << t << endl;
        t += 1;
        
        int total = hanoi( n );
        
        cout << total << endl;
        cout << endl;
    }
    
    return 0;
}