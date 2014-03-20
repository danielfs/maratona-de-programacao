// http://www.urionlinejudge.com.br/judge/en/problems/view/1397
#include <iostream>
 
using namespace std;
 
int main() {
 
    int rodadas, pontosA, pontosB, numeroA, numeroB;
 
    while( cin >> rodadas && rodadas > 0 ) {
         
        pontosA = pontosB = 0;
         
        for( int i = 0; i < rodadas; i++ ) {
            cin >> numeroA >> numeroB;
         
            if( numeroA > numeroB ) {
                pontosA += 1;
            }
            else if( numeroB > numeroA ) {
                pontosB += 1;
            }
        }
         
        cout << pontosA << " " << pontosB << endl;
         
    }
 
    return 0;
}