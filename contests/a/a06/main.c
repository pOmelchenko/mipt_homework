#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    fprintf(stdout, "%d\n", a-b);

    return 0;
}
