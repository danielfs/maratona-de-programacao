// http://www.urionlinejudge.com.br/judge/en/problems/view/1120
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
   
  char c1, c2, s;
  bool podeImprimir = false;
   
  while( scanf( "%c ", &c1 ) == 1 ) {
 
    podeImprimir = false;
     
    while( scanf( "%c", &c2 ) == 1 && c2 != '\n' ) {
       
      if( c1 == '0' && c2 == '0' ) {
    break;
      }
       
      if( c1 != c2 && c2 != '0' && !podeImprimir ) {
    podeImprimir = true;
      }
       
      if( podeImprimir ) {
    if( c2 != c1 ) {
      printf( "%c", c2 );
    }
      }
    }
     
    if( c1 == '0' ) {
      break;
    }
     
    if( !podeImprimir ) {
      printf( "0" );
    }
     
    printf( "\n" );
  }
   
  return 0;
}