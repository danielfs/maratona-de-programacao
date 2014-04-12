// http://www.urionlinejudge.com.br/judge/pt/problems/view/1281
#include <iostream>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for( int i = 0; i < n; i++ ) {
        map<string, double> produtosDisponiveis;
        int quantidadeDeProdutos, quantidadeComprada;
        double preco;
        string nomeProduto;
        
        cin >> quantidadeDeProdutos;
        
        for( int j = 0; j < quantidadeDeProdutos; j++ ) {
            cin >> nomeProduto >> preco;
            
            produtosDisponiveis[ nomeProduto ] = preco;
        }
        
        cin >> quantidadeDeProdutos;
        
        preco = 0.0;
        
        for( int j = 0; j < quantidadeDeProdutos; j++ ) {
            cin >> nomeProduto >> quantidadeComprada;
            
            preco += ( quantidadeComprada * produtosDisponiveis[ nomeProduto ] );
        }
        
        printf( "R$ %.2lf\n", preco );
    }
    
    return 0;
}
