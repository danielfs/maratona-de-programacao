// http://www.urionlinejudge.com.br/judge/en/problems/view/1165
#include <stdio.h>
#include <math.h>
 
bool isPrime( int x ) {
    if( x == 1 ) {
        return false;
    }
     
    if( x == 2 ) {
        return true;
    }
     
    if( x % 2 == 0 ) {
        return false;
    }
     
    for( int i = 3; i * i <= x; i += 2 ) {
        if( x % i == 0 ) {
            return false;
        }
    }
     
    return true;
}
 
int main() {
 
    int n, x;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d", &x );
         
        if( isPrime( x ) ) {
            printf( "%d eh primo\n", x );
        }
        else {
            printf( "%d nao eh primo\n", x );
        }
    }
 
    return 0;
}