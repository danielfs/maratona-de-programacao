// http://br.spoj.com/problems/BIT/
#include <stdio.h>

int main()
{
    int v, i = 0, j = 0, k = 0, l = 0, t = 0;
    
    scanf("%d", &v);
    
    while (v != 0)
    {
        printf("Teste %d\n", ++t);
        
        while (v >= 50)
        {
            v -= 50;
            i++;
        }
        while (v >= 10)
        {
            v -= 10;
            j++;
        }
        while (v >= 5)
        {
            v -= 5;
            k++;
        }
        while (v >= 1)
        {
            v -= 1;
            l++;
        }
        
        printf("%d %d %d %d\n\n", i, j, k, l);
        
        i = j = k = l = 0;
        
        scanf("%d", &v);
    }
    
    return 0;
}