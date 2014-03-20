// http://br.spoj.com/problems/COFRE/
#include <iostream>
using namespace std;

int main()
{
    int t = 0, n, j, z, s;
    
    while (cin >> n && n != 0)
    {
        cout << "Teste " << ++t << endl;
        s = 0;
        while (n--)
        {
            cin >> j >> z;
            s += (j - z);
            cout << s << endl;
        }
        cout << endl;
    }
    
    return 0;
}