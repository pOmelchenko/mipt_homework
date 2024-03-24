#include <stdio.h>

#define NUMS 3

int main(void)
{
    int num, nums[NUMS], res;
    scanf("%d", &num);

    nums[0] = num % 10;
    nums[1] = num / 10 % 10;
    nums[2] = num / 100 % 10;

    res = nums[0];
    for (int i = 1; i < NUMS; i++) {
        if (res < nums[i]) {
            res = nums[i];
        }
    }

    fprintf(stdout, "%d\n", res);

    return 0;
}
