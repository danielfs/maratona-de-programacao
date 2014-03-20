// http://www.urionlinejudge.com.br/judge/en/problems/view/1238
#include <iostream>
#include <string>
 
using namespace std;
 
void tratarStrings( string &s1, string &s2 ) {
    int menor = s1.size();
    bool primeiro = true;
     
    menor = s2.size() < menor ? s2.size() : menor;
     
    for( int i = 0; i < menor; ) {
        if( primeiro ) {
            cout << s1[ i ];
            primeiro = false;
        }
        else {
            cout << s2[ i ];
            i += 1;
            primeiro = true;
        }
    }
     
    string s = s1.size() > menor ? s1 : ( s2.size() > menor ? s2 : "" );
     
    for( int i = menor; i < s.size(); i++ ) {
        cout << s[ i ];
    }
     
    cout << endl;
}
 
int main() {
 
    int n;
    string s1, s2;
     
    cin >> n;
     
    for( int i = 0; i < n; i++ ) {
        cin >> s1 >> s2;
         
        tratarStrings( s1, s2 );
    }
 
    return 0;
}