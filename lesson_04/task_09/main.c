#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b, c;
    bool asd = false;

    scanf("%d%d%d", &a, &b, &c);

    if (a < b) {
        asd = true;
    }

    if (b > c) {
        asd = false;
    }

    printf("%s\n", asd ? "YES" : "NO");

    return 0;
}
