#include <stdio.h>

int main(void)
{
    int num, counter = 0;
    scanf("%d", &num);

    do {
        counter += num%10;
    } while (num /= 10);

    printf("%d\n", counter);
}
