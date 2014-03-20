// http://br.spoj.com/problems/ENGARRAF/
#include <iostream>
#include <vector>
#include <queue>
#include <list>

#define pp pair< int, int >

using namespace std;

class Prioritize {
    public:
        int operator() ( const pair< int, int >& p1, const pair< int, int >& p2 ) {
            return p1.second < p2.second;
        }
};

int main() {
    int locais, ruas;
    
    while( cin >> locais >> ruas && locais != 0 ) {
        
        int local1, local2, tempo, origem, destino, distancia[ locais + 1 ];
        vector< pp > G[ locais + 1 ];
        priority_queue< pp, vector< pp >, Prioritize > Q;
        
        for( int i = 0; i < ruas; i++ ) {
            cin >> local1 >> local2 >> tempo;
            
            G[ local1 ].push_back( pp( local2, tempo ) );
        }
        
        cin >> origem >> destino;
        
        for( int i = 1; i <= locais; i++ ) {
            distancia[ i ] = 9999999;
        }
        
        distancia[ origem ] = 0;
        
        Q.push( pp( origem, distancia[ origem ] ) );
        
        while( !Q.empty() ) {
            local1 = Q.top().first;
            Q.pop();
            
            int size = G[ local1 ].size();
            
            for( int i = 0; i < size; i++ ) {
                local2 = G[ local1 ][ i ].first;
                tempo  = G[ local1 ][ i ].second;
                
                if( distancia[ local2 ] > distancia[ local1 ] + tempo ) {
                    distancia[ local2 ] = distancia[ local1 ] + tempo;
                    Q.push( pp( local2, distancia[ local2 ] ) );
                }
            }
        }
        
        if( distancia[ destino ] == 9999999 )
            cout << -1 << endl;
        else
            cout << distancia[ destino ] << endl;
    }
    
    return 0;
}