// http://br.spoj.com/problems/COPA1/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int resultados[ 15 ][ 2 ];
    int i;
    string oitavas = "ABCDEFGHIJKLMNOP";
    string quartas = "";
    string semi    = "";
    string fim     = "";
    
    for( i = 0; i < 15; i++ ) {
        cin >> resultados[ i ][ 0 ] >> resultados[ i ][ 1 ];
    }
    
    for( i = 0; i < 8; i++ ) {
        if( resultados[ i ][ 0 ] > resultados[ i ][ 1 ] ) {
            quartas += oitavas[ i * 2 ];
        }
        else {
            quartas += oitavas[ i * 2 + 1 ];
        }
    }
    
    for( ; i < 12; i++ ) {
        if( resultados[ i ][ 0 ] > resultados[ i ][ 1 ] ) {
            semi += quartas[ i % 8 * 2 ];
        }
        else {
            semi += quartas[ i % 8 * 2 + 1 ];
        }
    }
    
    for( ; i < 14; i++ ) {
        if( resultados[ i ][ 0 ] > resultados[ i ][ 1 ] ) {
            fim += semi[ i % 12 * 2 ];
        }
        else {
            fim += semi[ i % 12 * 2 + 1 ];
        }
    }
    
    if( resultados[ i ][ 0 ] > resultados[ i ][ 1 ] ) {
        cout << fim[ 0 ] << endl;
    }
    else {
        cout << fim[ 1 ] << endl;
    }
    
    return 0;
}