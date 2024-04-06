#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    bool all_asc = true;
    int prev = number % 10;
    while (number /= 10) {
        if (number % 10 >= prev) {
            all_asc = false;
        }
    }

    fprintf(stdout, "%s", all_asc ? "YES" : "NO");
}
