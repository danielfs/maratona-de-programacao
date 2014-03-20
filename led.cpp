// http://www.urionlinejudge.com.br/judge/en/problems/view/1168
#include <stdio.h>
 
int quantidadeLeds( char c ) {
  if( c == '1' ) return 2;
  if( c == '2' ) return 5;
  if( c == '3' ) return 5;
  if( c == '4' ) return 4;
  if( c == '5' ) return 5;
  if( c == '6' ) return 6;
  if( c == '7' ) return 3;
  if( c == '8' ) return 7;
  if( c == '9' ) return 6;
  if( c == '0' ) return 6;
}
 
int main() {
   
  int testes;
  char c;
   
  scanf( "%d ", &testes );
   
  for( int i = 0; i < testes; i++ ) {
    int soma = 0;
     
    while( scanf( "%c", &c ) == 1 && c != '\n' ) {
      soma += quantidadeLeds( c );
    }
     
    printf( "%d leds\n", soma );
  }
   
  return 0;
}