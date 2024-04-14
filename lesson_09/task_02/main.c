#include <stdio.h>

int find_max_array(int size, int * array);

int main(void)
{
    int numbers[10];
    scanf("%d%d%d%d%d%d%d%d%d%d",
          numbers + 0, numbers + 1, numbers + 2, numbers + 3, numbers + 4,
          numbers + 5, numbers + 6, numbers + 7, numbers + 8, numbers + 9
    );

    printf("%d", find_max_array(10, numbers));

    return 0;
}

int find_max_array(int size, int * array)
{
    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}
