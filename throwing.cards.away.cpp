// http://www.urionlinejudge.com.br/judge/en/problems/view/1110
#include <iostream>
#include <list>
 
using namespace std;
 
int main() {
     
    short n;
     
    while( cin >> n && n != 0 ) {
        list<int> lista;
         
        for( int i = 1; i <= n; i++ ) lista.push_back( i );
         
        cout << "Discarded cards: " << lista.front();
        lista.pop_front();
         
        while( lista.size() > 1 ) {
            int f = lista.front();
            lista.pop_front();
            lista.push_back( f );
             
            cout << ", " << lista.front();
            lista.pop_front();
        }
         
        cout << endl << "Remaining card: " << lista.front() << endl;
    }
     
    return 0;
}