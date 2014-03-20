// http://www.urionlinejudge.com.br/judge/en/problems/view/1024
#include <iostream>
#include <string>
 
using namespace std;
 
void primeiro( string &palavra ) {
  int i = 0;
   
  while( palavra[ i ] != '\0' ) {
    char c = palavra[ i ];
     
    if( ( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' ) ) {
      c = c + 3;
    }
     
    palavra[ i ] = c;
     
    i += 1;
  }
}
 
void segundo( string &palavra ) {
   
  int tamanho = palavra.size();
  int metade = tamanho / 2;
   
  for( int i = metade; i < tamanho; i++ ) {
    char c = palavra[ i ];
     
    c = c - 1;
     
    palavra[ i ] = c;
  }
}
 
void inverter( string &palavra ) {
  int tamanho = palavra.size();
  int metade = tamanho / 2;
   
  for( int i = 0; i < metade; i++ ) {
    char c = palavra[ i ];
    palavra[ i ] = palavra[ tamanho - 1 - i ];
    palavra[ tamanho - 1 - i ] = c;
  }
}
 
void imprimir( string &palavra ) {
  int i = 0;
   
  while( palavra[ i ] != '\0' ) {
    cout << palavra[ i ];
     
    i += 1;
  }
   
  cout << endl;
}
 
void codificar( string &palavra ) {
  primeiro( palavra );
  inverter( palavra );
  segundo( palavra );
}
 
int main() {
 
  int testes;
  string palavra;
   
  cin >> testes;
   
  cin.ignore();
   
  for( int i = 0; i < testes; i++ ) {
     
    getline( cin, palavra );
     
    codificar( palavra );
    imprimir( palavra );
  }
 
  return 0;
}