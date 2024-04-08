#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    do {
        printf("%d", num % 10);
    } while (num /= 10);

    return 0;
}
