#include <stdio.h>

int main(void)
{
    int nums[5], min, max;

    scanf("%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

    min = max = nums[0];
    for (int i = 0; i < 5; i++) {
        if (min > nums[i]) {
            min = nums[i];
        }
        if (max < nums[i]){
            max = nums[i];
        }
    }

    fprintf(stdout, "%d\n", min + max);

    return 0;
}
