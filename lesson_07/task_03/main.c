#include <stdio.h>

int main(void)
{
    int num, counter = 0;
    scanf("%d", &num);

    do {
        if (num % 2)
        counter++;
    } while (num /= 2);

    fprintf(stdout, "%d", counter);
}
