// http://www.urionlinejudge.com.br/judge/en/problems/view/1039
#include <iostream>
#include <cmath>
 
using namespace std;
 
double distanceBetweenTwoPoints( int x1, int y1, int x2, int y2 ) {
    return sqrt( pow( ( x2 - x1 ), 2.0 ) + pow( ( y2 - y1 ), 2.0 ) );
}
 
int main() {
 
    int r1, x1, y1, r2, x2, y2;
     
    while( cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2 ) {
        double distance = distanceBetweenTwoPoints( x1, y1, x2, y2 );
         
        if( distance + r2 > r1 ) {
            cout << "MORTO" << endl;
        }
        else {
            cout << "RICO" << endl;
        }
    }
 
    return 0;
}