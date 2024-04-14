#include <stdio.h>
#include <stdbool.h>

int is_two_same(int size, int * array);

int main(void)
{
    int numbers[10];
    scanf("%d%d%d%d%d%d%d%d%d%d",
          numbers + 0, numbers + 1, numbers + 2, numbers + 3, numbers + 4,
          numbers + 5, numbers + 6, numbers + 7, numbers + 8, numbers + 9
    );

    printf("%d", is_two_same(10, numbers));

    return 0;
}

int is_two_same(int size, int * array)
{
    for(int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ++j) {
            if (array[i] == array[j]) {
                return true;
            }
        }
    }

    return false;
}
