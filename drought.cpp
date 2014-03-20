// http://www.urionlinejudge.com.br/judge/en/problems/view/1023
#include <stdio.h>
#include <map>
 
int main() {
     
    long n, t = 1;
    double x, y;
    bool primeiro = true;
     
    while( scanf( "%ld", &n ) == 1 && n != 0 ) {
        std::map<int, int> mapaDeConsumo;
        std::map<int, int>::iterator it;
        double media = 0.0, soma = 0.0, quantidade = 0.0;
         
        for( long i = 0; i < n; i++ ) {
            scanf( "%lf %lf", &x, &y );
             
            soma += y;
            quantidade += x;
             
            mapaDeConsumo[ ( int ) ( y / x ) ] += x;
        }
         
        if( primeiro ) {
            printf( "Cidade# %ld:", t++ );
            primeiro = false;
        }
        else {
            printf( "\nCidade# %ld:", t++ );
        }
         
        printf( "\n" );
         
        it = mapaDeConsumo.begin();
         
        printf( "%d-%d", it->second, it->first );
         
        it++;
         
        for( ; it != mapaDeConsumo.end(); it++ ) {
            printf( " %d-%d", it->second, it->first );
        }
         
        printf( "\n" );
         
        media = ( int ) ( soma * 100.0 / quantidade );
        media = media / 100.0;
         
        printf( "Consumo medio: %.2lf m3.\n", media );
    }
     
    return 0;
}