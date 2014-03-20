// http://www.urionlinejudge.com.br/judge/en/problems/view/1071
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
  int x, y, maior, menor, soma = 0;
  scanf( "%d %d", &x, &y );
 
  maior = ( x + y + abs( x - y ) ) / 2;
  menor = ( x + y ) - maior;
 
  if( menor % 2 == 0 ) {
    menor += 1;
  }
 
  if( maior % 2 == 0 ) {
    maior -= 1;
  }
 
  for( int i = menor; i <= maior; i += 2 ) {
      soma += i;
  }
 
  printf( "%d\n", soma );
 
  return 0;
}