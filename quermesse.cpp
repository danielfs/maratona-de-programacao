// http://br.spoj.com/problems/QUERM/
#include <iostream>
using namespace std;

int main()
{
    int n = 1, p = 0, q = 0, t = 0;
    while (n != 0)
    {
         cin >> n;
         if (n != 0)
         {
              for (int i = 1; i <= n; i++)
              {
                   cin >> p;
                   if (p == i)
                   {
                        t++;
                        q = p;
                   }
              }
              cout << "Teste " << t << endl;
              cout << q << endl << endl;
         }
    }
    return 0;
}