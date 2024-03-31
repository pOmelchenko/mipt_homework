#include <stdio.h>

int main(void)
{
    int num_a, num_b;
    scanf("%d%d", &num_a, &num_b);

    for (int i = num_a; i <= num_b; i++) {
        printf("%d ", i*i);
    }

    printf("\n");
}
