// http://www.urionlinejudge.com.br/judge/en/problems/view/1171
#include <stdio.h>
#include <map>
 
using namespace std;
 
int main() {
 
    int n, x;
    map<int, int> mapa;
    map<int, int>::iterator it;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d", &x );
         
        mapa[ x ] += 1;
    }
     
    for( it = mapa.begin(); it != mapa.end(); it++ ) {
        printf( "%d aparece %d vez(es)\n", it->first, it->second );
    }
 
    return 0;
}