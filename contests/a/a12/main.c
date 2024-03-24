#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    fprintf(stdout, "%d", a % 10 + a / 10 % 10 + a / 100 % 10);

    return 0;
}
