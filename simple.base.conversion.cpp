// http://www.urionlinejudge.com.br/judge/en/problems/view/1199
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <stdlib.h>
 
using namespace std;
 
template <typename T>
string numberToString( T number ) {
    ostringstream ss;
    ss << number;
    return ss.str();
}
 
string simpleDec2Hex( int & );
string dec2hex( string & );
string hex2dec( string & );
 
string simpleDec2Hex( int &number ) {
 
    if( number < 10 ) {
        return numberToString( number );
    }
    else {
        if( number == 10 ) return "A";
        if( number == 11 ) return "B";
        if( number == 12 ) return "C";
        if( number == 13 ) return "D";
        if( number == 14 ) return "E";
        if( number == 15 ) return "F";
    }
}
 
int simpleHex2Dec( char c ) {
    if( c == '0' ) return 0;
    if( c == '1' ) return 1;
    if( c == '2' ) return 2;
    if( c == '3' ) return 3;
    if( c == '4' ) return 4;
    if( c == '5' ) return 5;
    if( c == '6' ) return 6;
    if( c == '7' ) return 7;
    if( c == '8' ) return 8;
    if( c == '9' ) return 9;
    if( c == 'A' || c == 'a' ) return 10;
    if( c == 'B' || c == 'b' ) return 11;
    if( c == 'C' || c == 'c' ) return 12;
    if( c == 'D' || c == 'd' ) return 13;
    if( c == 'E' || c == 'e' ) return 14;
    if( c == 'F' || c == 'f' ) return 15;
}
 
string dec2hex( string &number ) {
    int n = atoi( number.c_str() );
    string result = "";
     
    while( n >= 16 ) {
     
        int nn = n % 16;
        result = simpleDec2Hex( nn ) + result;
         
        n = n / 16;
    }
     
    if( n >= 0 ) {
        result = simpleDec2Hex( n ) + result;
    }
     
    return result;
}
 
string hex2dec( string &number ) {
    int sum = 0;
    int x = 0;
    string::reverse_iterator it;
     
    for( it = number.rbegin(); it != number.rend(); it++ ) {
        sum += ( pow( 16.0, x ) * simpleHex2Dec( *it ) );
        x += 1;
    }
     
    return numberToString( sum );
}
 
string convert( string number, string base ) {
 
    if( base == "dec" ) {
        return dec2hex( number );
    }
    else if( base == "hex" ) {
        return hex2dec( number );
    }
}
 
int main() {
 
    string n, r;
    bool primeiro = true;
     
    while( cin >> n ) {
     
        if( n[ 0 ] == '-' ) break;
     
        if( n[ 0 ] == '0' && n[ 1 ] == 'x' ) r = convert( n.substr( 2, n.size() ), "hex" );
        else r = "0x" + convert( n, "dec" );
         
        cout << r << endl;
    }
 
    return 0;
}