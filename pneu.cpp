// http://br.spoj.com/problems/JPNEU/
#include <stdio.h>

int main() {
    int pressaoDesejada, pressaoLida;
    scanf("%d", &pressaoDesejada);
    scanf("%d", &pressaoLida);
    printf("%d", (pressaoDesejada - pressaoLida));
    return 0;
}