// http://www.urionlinejudge.com.br/judge/en/problems/view/1040
#include <stdio.h>
 
int main() {
     
    float nota1, nota2, nota3, nota4, nota5, media;
     
    scanf( "%f %f %f %f", &nota1, &nota2, &nota3, &nota4 );
     
    media = ( ( nota1 * 2 ) + ( nota2 * 3 ) + ( nota3 * 4 ) + ( nota4 ) ) / 10;
     
    printf( "Media: %.1f\n", media );
     
    if( media >= 7 ) {
        printf( "Aluno aprovado.\n" );
    }
    else if( media < 5 ) {
        printf( "Aluno reprovado.\n" );
    }
    else {
        printf( "Aluno em exame.\n" );
         
        scanf( "%f", &nota5 );
         
        printf( "Nota do exame: %.1f\n", nota5 );
         
        media = ( media + nota5 ) / 2;
         
        if( media >= 5 ) {
            printf( "Aluno aprovado.\n" );
        }
        else {
            printf( "Aluno reprovado.\n" );
        }
         
        printf( "Media final: %.1f\n", media );
    }
     
    return 0;
}