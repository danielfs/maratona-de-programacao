// http://www.urionlinejudge.com.br/judge/en/problems/view/1049
#include <stdio.h>
#include <string.h>
 
int main() {
 
    char palavra1[ 12 ], palavra2[ 8 ], palavra3[ 10 ];
     
    gets( palavra1 );
    gets( palavra2 );
    gets( palavra3 );
     
    if( strcmp( "vertebrado", palavra1 ) == 0 ) {
        if( strcmp( "ave", palavra2 ) == 0 ) {
            if( strcmp( "carnivoro", palavra3 ) == 0 ) {
                printf( "aguia\n" );
            }
            else {
                printf( "pomba\n" );
            }
        }
        else {
            if( strcmp( "onivoro", palavra3 ) == 0 ) {
                printf( "homem\n" );
            }
            else {
                printf( "vaca\n" );
            }
        }
    }
    else {
        if( strcmp( "inseto", palavra2 ) == 0 ) {
            if( strcmp( "hematofago", palavra3 ) == 0 ) {
                printf( "pulga\n" );
            }
            else {
                printf( "lagarta\n" );
            }
        }
        else {
            if( strcmp( "hematofago", palavra3 ) == 0 ) {
                printf( "sanguessuga\n" );
            }
            else {
                printf( "minhoca\n" );
            }
        }
    }
 
    return 0;
}