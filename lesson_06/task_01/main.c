#include <stdio.h>

int main(void)
{
    int num, result = 0;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        result += i;
    }

    fprintf(stdout, "%d", result);

    return 0;
}
