#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    fprintf(stdout, "%.2f\n", (float)(a+b+c)/3);

    return 0;
}
