// http://br.spoj.com/problems/SOMA/
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    long soma = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        soma += x;
    }
    cout << soma;
    return 0;
}