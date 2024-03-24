#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b, c;
    bool can_be = false;

    scanf("%d%d%d", &a, &b, &c);

    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        can_be = true;
    }

    printf("%s\n", can_be ? "YES" : "NO");

    return 0;
}
