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

    if (get_sum(num) == get_add(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
