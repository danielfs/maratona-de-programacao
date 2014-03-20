// http://br.spoj.com/problems/ELEVADO2/
#include <iostream>
using namespace std;

int main()
{
    int n, c, s, e, t = 0;
    bool ex = false;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        t += (e - s);
        if (t > c)
           ex = true;
    }
    cout << ((ex) ? "S" : "N") << endl;
    return 0;
}