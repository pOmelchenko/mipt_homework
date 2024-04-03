#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    bool has_pair = false;
    int previous = number % 10;
    while (number /= 10) {
        if (previous == number % 10) has_pair = true;

        previous = number % 10;
    }

    fprintf(stdout, "%s", has_pair ? "YES" : "NO");
}