#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a < b) {
        fprintf(stdout, "%d %d\n", a, b);
    } else {
        fprintf(stdout, "%d %d\n", b, a);
    }

    return 0;
}
