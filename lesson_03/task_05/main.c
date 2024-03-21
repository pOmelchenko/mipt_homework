#include <stdio.h>

int main(void)
{
    int a, a1, a10, a100;
    scanf("%d", &a);

    a1 = a % 10;
    a10 = a / 10 % 10;
    a100 = a / 100 % 10;

    printf("%d\n", a1 * a10 * a100);
    return 0;
}
