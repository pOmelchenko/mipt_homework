#include <stdio.h>

int main(void)
{
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);

    if (a > b) {
        fprintf(stderr, "%s", "[!!!] number \"a\" must be greater than \"b\".\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        sum += i*i;
    }

    fprintf(stdout, "%d\n", sum);

    return 0;
}
