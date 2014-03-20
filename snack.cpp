// http://www.urionlinejudge.com.br/judge/en/problems/view/1038
#include <stdio.h>
 
int main() {
     
    float precos[] = { 4.0, 4.5, 5.0, 2.0, 1.5 };
    int codigo, quantidade;
     
    scanf( "%d %d", &codigo, &quantidade );
     
    printf( "Total: R$ %.2f\n", ( precos[ codigo - 1 ] * quantidade ) );
     
    return 0;
}