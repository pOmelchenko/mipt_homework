#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num;
    bool flag = 0;

    scanf("%d", &num);

    int i = 0;
    while (num > 0) {
        flag = 0 != num && 2 == i;

        num /= 10;
        i++;
    }

    fprintf(stdout, "%s\n", flag ? "YES" : "NO");

    return 0;
}
