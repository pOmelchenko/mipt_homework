#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    int nine = 0;
    do {
        if (number % 10 == 9) {
            nine++;
        }
    } while (number /= 10);

    fprintf(stdout, "%s", nine == 1 ? "YES" : "NO");
}
