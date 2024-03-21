#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    do {
        if (num % 10 % 2) {
            fprintf(stderr, "NO\n");
            return 1;
        }
    } while (num /= 10);

    fprintf(stdout, "YES\n");

    return 0;
}
