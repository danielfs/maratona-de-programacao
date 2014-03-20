// http://br.spoj.com/problems/PAR/
#include <iostream>
using namespace std;

int main()
{
    int n = 1, p1, p2, s = 1;
    string n1, n2;
    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            cout << "Teste " << s << endl;
            cin >> n1 >> n2;
            s++;
            
            for (int i = 0; i < n; i++)
            {
                cin >> p1 >> p2;
                if ((p1 + p2) % 2 == 0)
                   cout << n1 << endl;
                else
                   cout << n2 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}