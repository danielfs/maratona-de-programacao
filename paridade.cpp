// http://br.spoj.com/problems/PARIDADE/
#include <iostream>
using namespace std;

void toBinAndNumberParity(long i)
{
    string bin = "";
    long p = 0;
    for (; i >= 1; i = i / 2)
    {
        if (i % 2 == 1)
        {
           bin.insert(0, "1");
           p++;
        }
        if (i % 2 == 0)
           bin.insert(0, "0");
    }
    
    cout << "The parity of " << bin << " is " << p << " (mod 2)." << endl;
}

int main()
{
    long i = 1;
    while (i != 0)
    {
        cin >> i;
        if (i != 0)
        {
            toBinAndNumberParity(i);
        }
    }
    return 0;
}