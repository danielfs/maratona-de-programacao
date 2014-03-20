// http://www.urionlinejudge.com.br/judge/en/problems/view/1022
#include <stdio.h>
#include <algorithm>
 
long gcd( long a, long b ) {
    if( a % b == 0 ) return b;
    else return gcd( b, a % b );
}
 
long lcm( long a, long b ) {
    return ( ( a * b ) / gcd( a, b ) );
}
 
void simplifier( long n, long d, long &rn, long &rd ) {
    long _gcd = gcd( n, d );
     
    if( _gcd < 0 ) _gcd *= -1;
     
    rn = n / _gcd;
    rd = d / _gcd;
}
 
void calculator( char op, long n1, long d1, long n2, long d2 ) {
    long rn, rd, srn = 0, srd = 0;
     
    if( op == '/' ) {
        op = '*';
        std::swap( n2, d2 );
    }
     
    rd = d1 * d2;
     
    if( op == '+' )
        rn = ( ( rd / d1 * n1 ) + ( rd / d2 * n2 ) );
    else if( op == '-' )
        rn = ( ( rd / d1 * n1 ) - ( rd / d2 * n2 ) );
    else if( op == '*' )
        rn = n1 * n2;
     
    if( rn != 0 && rd != 0 ) {
        simplifier( rn, rd, srn, srd );
    }
    else {
        srn = rn;
        srd = rd;
    }
     
    printf( "%ld/%ld = %ld/%ld\n", rn, rd, srn, srd );
}
 
int main() {
     
    int n;
    long n1, d1, n2, d2;
    char op;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%ld / %ld %c %ld / %ld", &n1, &d1, &op, &n2, &d2 );
         
        calculator( op, n1, d1, n2, d2 );
    }
     
    return 0;
}