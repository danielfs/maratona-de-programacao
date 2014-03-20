// http://www.urionlinejudge.com.br/judge/en/problems/view/1169
#include <stdio.h>
#include <iostream>
 
using namespace std;
 
unsigned long long calcularSoma( int c ) {
    unsigned long long s = 1, t = 1;
     
    for( int i = 1; i < c; i++ ) {
        t = t * 2;
        s = s + t;
    }
     
    return s;
}
 
unsigned long long calcularQuantidadeSementes( int c ) {
    unsigned long long s = calcularSoma( c );
     
    return ( s / 12000 );
}
 
int main() {
 
    int n, x;
    unsigned long long r;
     
    scanf( "%d", &n );
     
    for( int i = 0; i < n; i++ ) {
        scanf( "%d", &x );
         
        r = calcularQuantidadeSementes( x );
         
        printf( "%lld kg\n", r );
    }
 
    return 0;
}