#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    int all_even = true;
    do {
        if (number % 2 != 0) {
            all_even = false;
        }
    } while (number /= 10);

    fprintf(stdout, "%s", all_even ? "YES" : "NO");
}
