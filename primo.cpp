// http://br.spoj.com/problems/PRIMO/
#include <iostream>
using namespace std;

bool primo(long long n)
{
    if (n < 0) n *= -1;
    if (n == 0 || n == 1) return false;
    for (long long i = 0; i < n; i++)
    {
        if ((i >= 2) && (i < n) && (n % i == 0))
           return false;
    }
    return true;
}
int main()
{
    long long num;
    cin >> num;
    cout << ((primo(num)) ? "sim" : "nao");
    return 0;
}