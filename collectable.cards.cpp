// http://www.urionlinejudge.com.br/judge/en/problems/view/1028
#include <iostream>
 
using namespace std;
 
int gcd( int a, int b ) {
    while( b != 0 ) {
        int t = b;
        b = a % t;
        a = t;
    }
     
    return a;
}
 
int main() {
 
    int n, f1, f2;
     
    cin >> n;
     
    for( int i = 0; i < n; i++ ) {
     
        cin >> f1 >> f2;
     
        cout << gcd( f1, f2 ) << endl;
    }
 
    return 0;
}