// http://www.urionlinejudge.com.br/judge/en/problems/view/1255
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
 
using namespace std;
 
void tratarLinha( string &w ) {
    map<char, int> mapa;
    map<char, int>::iterator mit;
    string::iterator it;
    int maior = 0;
    string retorno;
     
    for( it = w.begin(); it != w.end(); it++ ) {
        if( isalpha( *it ) ) {
            mapa[ tolower( *it ) ] += 1;
        }
    }
     
    for( mit = mapa.begin(); mit != mapa.end(); mit++ ) {
        if( mit->second > maior ) {
            maior = mit->second;
        }
    }
     
    for( mit = mapa.begin(); mit != mapa.end(); mit++ ) {
        if( mit->second == maior ) {
            retorno.push_back( mit->first );
        }
    }
     
    sort( retorno.begin(), retorno.end() );
     
    cout << retorno << endl;
}
 
int main() {
 
    int t;
    string w;
     
    cin >> t;
     
    cin.ignore();
     
    for( int i = 0; i < t; i++ ) {
        getline( cin, w );
         
        tratarLinha( w );
    }
 
    return 0;
}