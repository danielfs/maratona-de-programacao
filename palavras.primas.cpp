// http://br.spoj.com/problems/PAPRIMAS/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool primo(int n)
{
    if (n == 1 || n == 2) return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    string palavra;
    int soma = 0;
    while (getline(cin, palavra))
    {
        for (int i = 0; i < palavra.length(); i++)
        {
            //letra A vale 27, a letra B vale 28 e a letra Z vale 52
            //letra a vale 1, a letra b vale 2 e a letra z vale 26
            
            // a == 97   z == 122
            // A == 65   Z == 90
            if ((palavra[i] >= 65) && (palavra[i] <= 90))
               soma += (palavra[i] - 38);
            if ((palavra[i] >= 97) && (palavra[i] <= 122))
               soma += (palavra[i] - 96);
        }
        if (primo(soma)) cout << "It is a prime word.\n";
        else cout << "It is not a prime word.\n";
        
        soma = 0;
    }
    return 0;
}