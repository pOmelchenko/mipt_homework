#include <stdio.h>

int main(void)
{
    int num, even = 0, odd = 0;
    scanf("%d", &num);

    do {
        num % 10 % 2 == 0 ? even++ : odd++;
    } while (num /= 10);

    fprintf(stdout, "%d %d", even, odd);

    return 0;
}
