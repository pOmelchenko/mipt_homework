#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const int size = 10;
    int num[size];
    scanf("%d%d%d%d%d%d%d%d%d%d",
          num + 0, num + 1, num + 2, num + 3, num + 4,
          num + 5, num + 6, num + 7, num + 8, num + 9
    );

    int tmp;
    bool noSwap;

    for (int i = size - 1; i >= 0; i--) {
        noSwap = true;
        for (int j = 0; j < i; j++)
        {
            if ((num[j] % 10) > (num[j + 1] % 10))
            {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
                noSwap = false;
            }
        }
        if (noSwap == true)
            break;
    }

    for (int i = 0; i < *(&num + 1) - num; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
