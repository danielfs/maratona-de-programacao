// http://www.urionlinejudge.com.br/judge/en/problems/view/1214
#include <iostream>
#include <vector>
#include <stdio.h>
 
using namespace std;
 
int main() {
     
    int c;
     
    cin >> c;
     
    for( int i = 0; i < c; i++ ) {
        long n, acima = 0;
        vector<double> vetor;
        double v;
        double soma = 0.0, media = 0.0, acimaDaMedia = 0.0;
         
        cin >> n;
         
        for( long j = 0; j < n; j++ ) {
            cin >> v;
            vetor.push_back( v );
            soma += v;
        }
         
        media = soma / ( double ) vetor.size();
         
        for( long j = 0; j < n; j++ ) {
            if( vetor[ j ] > media ) acima += 1;
        }
         
        acimaDaMedia = ( double ) acima / vetor.size();
         
        printf( "%.3lf%%\n", ( acimaDaMedia * 100.0 ) );
    }
     
    return 0;
}