#include <stdio.h>

int main(void)
{
    int a, b, c, res;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        res = a;
    }

    if (b > a && b > c) {
        res = b;
    }

    if (c > a && c > b) {
        res = c;
    }

    fprintf(stdout, "%d\n", res);

    return 0;
}
