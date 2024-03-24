#include <stdio.h>

int main(void)
{
    int res, nums[5];

    scanf("%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

    res = nums[0];
    for (int i = 1; i < 5; i++) {
        if (res > nums[i]) {
            res = nums[i];
        }
    }

    fprintf(stdout, "%d\n", res);

    return 0;
}
