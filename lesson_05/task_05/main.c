#include <stdio.h>

int get_sum(int num)
{
    int res = 0;
    do {
        res += num % 10;
    } while (num /= 10);

    return res;
}

int get_add(int num)
{
    int res = 1;
    do {
        res *= num % 10;
    } while (num /= 10);

    return res;
}

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 10; i <= num; i++) {
        if (get_sum(i) == get_add(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
