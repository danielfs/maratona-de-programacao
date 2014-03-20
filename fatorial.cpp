// http://br.spoj.com/problems/FATORIA2/
#include <iostream>
using namespace std;

int main()
{
    long n, fatorial = 1;
    cin >> n;
    while(n > 1)
    {
        fatorial *= n;
        n--;
    }
    cout << fatorial << endl;
    return 0;
}