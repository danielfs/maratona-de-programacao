// http://www.urionlinejudge.com.br/judge/en/problems/view/1221
#include <stdio.h>
#include <math.h>
  
bool isPrime( long x ) {
    if( x == 1 ) {
        return false;
    }
      
    if( x == 2 ) {
        return true;
    }
      
    if( x % 2 == 0 ) {
        return false;
    }
     
    for( long i = 3; i * i <= x; i += 2 ) {
        if( x % i == 0 ) {
            return false;
        }
    }
      
    return true;
}
  
int main() {
  
    int n;
    long x;
      
    scanf( "%d", &n );
      
    for( int i = 0; i < n; i++ ) {
        scanf( "%ld", &x );
          
        if( isPrime( x ) ) {
            printf( "Prime\n" );
        }
        else {
            printf( "Not Prime\n" );
        }
    }
  
    return 0;
}