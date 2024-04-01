#include <stdio.h>

int main(void)
{
    int num_a, num_b, res = 0;
    scanf("%d%d", &num_a, &num_b);

    for (int i = num_a; i <= num_b; i++) {
        res += i*i;
    }

    printf("%d\n", res);
}
