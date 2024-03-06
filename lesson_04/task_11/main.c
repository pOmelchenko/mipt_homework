#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b, c;
    bool can_be = false;

    scanf("%d%d%d", &a, &b, &c);

    if (a < b + c) {
        can_be = true;
    }

    if (b < a + c) {
        can_be = true;
    }

    if (c < a + b) {
        can_be = true;
    }

    printf("%s\n", can_be ? "YES" : "NO");

    return 0;
}
