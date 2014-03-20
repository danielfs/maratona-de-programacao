// http://br.spoj.com/problems/METEORO/
#include <iostream>
using namespace std;

int main()
{
    int x1 = 1, x2 = 1, y1 = 1, y2 = 1, n, x, y, s = 1, q;
    while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
    {
         cin >> x1 >> y1 >> x2 >> y2;
         if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
         {
              q = 0;
              cout << "Teste " << s << endl;
              s++;
              cin >> n;
              for (int i = 0; i < n; i++)
              {
                  cin >> x >> y;
                  if (x >= x1 && x <= x2 && y >= y2 && y <= y1)
                      q++;
                     
              }
              cout << q << endl << endl;
         }
    }
    return 0;
}