// http://www.urionlinejudge.com.br/judge/en/problems/view/1029
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int fib( int v, int &c ) {
 
    c += 1;
 
    if( v == 0 || v == 1 ) {
        return v;
    }
    else {
        return fib( v - 1, c ) + fib( v - 2, c );
    }
}
 
int main() {
 
    int n;
     
    cin >> n;
     
    for( int i = 0; i < n; i++ ) {
        int v, r, c = -1;
         
        cin >> v;
         
        r = fib( v, c );
         
        printf( "fib(%d) = %d calls = %d\n", v, c, r );
    }
 
    return 0;
}