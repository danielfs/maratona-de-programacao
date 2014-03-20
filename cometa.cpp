// http://br.spoj.com/problems/COMETA2/
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (i = 1986; i <= n; i = i + 76);
    cout << i << endl;
    return 0;
}