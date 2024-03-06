#include <stdio.h>

int main(void) {
    int a, a1, a10, a100;
    scanf("%d", &a);

    a1 = a % 10;
    a10 = a / 10 % 10;
    a100 = a / 100 % 10;

    if (a1 >= a10 && a1 >= a100) {
        printf("%d", a1);
    } else if (a10 >= a1 && a10 >= a100) {
        printf("%d", a10);
    } else {
        printf("%d", a100);
    }

    return 0;
}
