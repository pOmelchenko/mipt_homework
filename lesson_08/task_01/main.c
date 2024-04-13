#include <stdio.h>

int main(void)
{
    int num[5];
    scanf("%d%d%d%d%d", num+0, num+1, num+2, num+3, num+4);

    printf("%.3f", (float)(num[0] + num[1] + num[2] + num[3] + num[4]) / 5);

    return 0;
}