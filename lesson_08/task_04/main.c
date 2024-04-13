#include <stdio.h>

int main(void)
{
    const int size = 10;
    int num[size];
    scanf("%d%d%d%d%d%d%d%d%d%d",
          num + 0, num + 1, num + 2, num + 3, num + 4,
          num + 5, num + 6, num + 7, num + 8, num + 9
    );

    for (int i = 0; i < *(&num + 1) - num; i++) {
        if (num[i] / 10 % 10 == 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}