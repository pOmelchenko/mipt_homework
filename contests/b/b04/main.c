#include <stdio.h>

int main(void)
{
    int num, counter = 1;
    scanf("%d", &num);

    while (num /= 10) {
        ++counter;
    }

    printf("%s\n", counter == 3 ? "YES" : "NO");
}
