#include <stdio.h>

void var_one(int num)
{
    int result = 1;
    for (int i = 1; i < num; i++) {
        result *= 2;
    }

    fprintf(stdout, "%d\n", result);
}

void var_two(int num)
{
    fprintf(stdout, "%d\n", 1 << (num - 1));
}

int main(void)
{
    int num;
    scanf("%d", &num);

    if (num < 1 || num > 64) {
        fprintf(stderr, "число должно быть в диапазоне от 1 до 64\n");
        return 1;
    }

    var_one(num);
    var_two(num);

    return 0;
}

