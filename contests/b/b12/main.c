#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int min = num % 10;
    int max = num % 10;

    while (num /= 10) {
        int cur = num % 10;
        if (min > cur) min = cur;
        if (max < cur) max = cur;
    }

    fprintf(stdout, "%d %d", min, max);

    return 0;
}
