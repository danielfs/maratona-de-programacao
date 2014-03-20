// http://www.urionlinejudge.com.br/judge/en/problems/view/1240
#include <iostream>
#include <string>
 
using namespace std;
 
bool tratarStrings( string &s1, string &s2 ) {
    string::reverse_iterator rit1, rit2;
     
    for( rit1 = s1.rbegin(), rit2 = s2.rbegin(); rit1 != s1.rend() && rit2 != s2.rend() ; ++rit1, ++rit2 ) {
        if( *rit1 != *rit2 ) {
            return false;
        }
    }
     
    if( s2.size() > s1.size() ) {
        return false;
    }
     
    return true;
}
 
int main() {
 
    int n;
    string s1, s2;
     
    cin >> n;
     
    cin.ignore();
     
    for( int i = 0; i < n; i++ ) {
        cin >> s1 >> s2;
         
        if( tratarStrings( s1, s2 ) ) {
            cout << "encaixa" << endl;
        }
        else {
            cout << "nao encaixa" << endl;
        }
    }
 
    return 0;
}