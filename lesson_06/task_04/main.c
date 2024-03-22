#include <stdio.h>

int get_sum(int num)
{
    int res = 0;
    do {
        res += num % 10;
    } while (num /= 10);

    return res;
}

int main(void)
{
    int num;
    scanf("%d", &num);

    if (get_sum(num) % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
