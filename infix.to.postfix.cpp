// http://www.urionlinejudge.com.br/judge/en/problems/view/1077
#include <stdio.h>
#include <iostream>
#include <stack>
 
using namespace std;
 
bool isOperand( char c ) {
    if( c >= 'A' && c <= 'Z' ) return true;
    if( c >= 'a' && c <= 'z' ) return true;
    if( c >= '0' && c <= '9' ) return true;
    return false;
}
 
bool isOperator( char c ) {
    if( c == '+' || c == '-' || c == '*' || c == '/' || c == '^' ) return true;
    return false;
}
 
bool isLeftAssociative( char c ) {
    if( c == '+' || c == '-' || c == '*' || c == '/' ) return true;
    return false;
}
 
bool isRightAssociative( char c ) {
    if( c == '^' ) return true;
    return false;
}
 
int precedence( char c ) {
    if( c == '^' ) return 4;
    if( c == '*' || c == '/' ) return 3;
    if( c == '+' || c == '-' ) return 2;
    return 0;
}
 
int main() {
     
    int n;
    char c;
    stack<char> pilha;
    string saida = "";
     
    scanf( "%d\n", &n );
     
    for( int i = 0; i < n; i++ ) {
         
        while( scanf( "%c", &c ) == 1 ) {
            if( isOperand( c ) ) saida += c;
            else if( isOperator( c ) ) {
                char o1 = c;
                 
                while( !pilha.empty() && isOperator( pilha.top() ) ) {
                    char o2 = pilha.top();
                     
                    while( isOperator( o2 ) && ( ( isLeftAssociative( o1 ) && precedence( o1 ) == precedence( o2 ) ) || ( precedence( o1 ) < precedence( o2 ) ) ) ) {
                        saida += o2;
                        pilha.pop();
                         
                        if( !pilha.empty() )
                            o2 = pilha.top();
                        else
                            o2 = '\0';
                    }
                     
                    break;
                }
                 
                pilha.push( o1 );
            }
            else if( c == '(' ) {
                pilha.push( c );
            }
            else if( c == ')' ) {
                while( !pilha.empty() && pilha.top() != '(' ) {
                    saida += pilha.top();
                    pilha.pop();
                }
                 
                if( !pilha.empty() )
                    pilha.pop();
            }
            else if( c == '\n' ) {
                while( !pilha.empty() && isOperator( pilha.top() ) ) {
                    saida += pilha.top();
                    pilha.pop();
                }
                 
                cout << saida << endl;
                 
                while( !pilha.empty() ) pilha.pop();
                saida = "";
                 
                break;
            }
        }
    }
     
    return 0;
}