#include <stdio.h>

void reverse(int *arr, int len)
{
    int tmp_arr[len];

    for (int i = 0; i < len; i++) tmp_arr[i] = arr[i];

    for (int i = 0; i < len; i++) arr[i] = tmp_arr[(len - 1) - i];
}

int main(void) {
    const int size = 12;
    int num[size];
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",
          num + 0, num + 1, num + 2, num + 3, num + 4, num + 5,
          num + 6, num + 7, num + 8, num + 9, num + 10, num + 11
          );

    int dist = size - 4;

    reverse(num, dist);
    reverse(num + dist, size - dist);
    reverse(num, size);

    for (int i = 0; i < *(&num + 1) - num; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}