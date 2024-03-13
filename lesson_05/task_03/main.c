#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num, res;
    bool flag = 0;

    scanf("%d", &num);

    int i = 0;
    while (num > 0) {
        if (num % 10 % 2) {
            fprintf(stderr, "NO\n");
            return 1;
        }

        num /= 10;
        i++;
    }

    fprintf(stdout, "YES\n");

    return 0;
}
