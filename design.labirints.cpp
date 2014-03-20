// http://www.urionlinejudge.com.br/judge/en/problems/view/1076
#include <iostream>
#include <list>
 
using namespace std;
 
class Graph {
    int V;
    list< int > *adj;
    void DFSUtil( int v, bool visited[], int &c );
public:
    Graph( int V );
    void addEdge( int v, int w );
    void DFS( int v, int &c );
};
 
Graph::Graph( int V ) {
    this->V = V;
    adj = new list< int >[ V ];
}
 
void Graph::addEdge( int v, int w ) {
    adj[ v ].push_back( w );
}
 
void Graph::DFSUtil( int v, bool visited[], int &c ) {
    visited[ v ] = true;
     
    list< int >::iterator i;
     
    for( i = adj[ v ].begin(); i != adj[ v ].end(); ++i ) {
        if( !visited[ *i ] ) {
            c += 2;
            DFSUtil( *i, visited, c );
        }
    }
}
 
void Graph::DFS( int v, int &c ) {
    bool *visited = new bool[ V ];
    for( int i = 0; i < V; i++ )
        visited[ i ] = false;
     
    DFSUtil( v, visited, c );
}
 
int main() {
 
    int t, n, v, a, v1, v2, c;
     
    cin >> t;
     
    for( int i = 0; i < t; i++ ) {
        cin >> n;
        cin >> v >> a;
         
        Graph g( v );
         
        c = 0;
         
        for( int j = 0; j < a; j++ ) {
            cin >> v1 >> v2;
             
            g.addEdge( v1, v2 );
            g.addEdge( v2, v1 );
        }
         
        g.DFS( n, c );
         
        cout << c << endl;
    }
 
    return 0;
}