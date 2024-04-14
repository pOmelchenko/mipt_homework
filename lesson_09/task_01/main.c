#include <stdio.h>

void sort_even_odd(int length, int * array);

int main(void)
{
    int numbers[10];
    scanf("%d%d%d%d%d%d%d%d%d%d",
          numbers + 0, numbers + 1, numbers + 2, numbers + 3, numbers + 4,
          numbers + 5, numbers + 6, numbers + 7, numbers + 8, numbers + 9
    );

    sort_even_odd((int)(*(&numbers + 1) - numbers), numbers);

    for (int i = 0; i < *(&numbers + 1) - numbers; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

void sort_even_odd(int length, int * array)
{
    int even_index = 0, even[length] , odd_index = 0, odd[length];
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            even[even_index++] = array[i];
        } else {
            odd[odd_index++] = array[i];
        }
    }

    int array_index = 0;
    for(int i = 0; i < even_index; i++) {
        array[array_index++] = even[i];
    }
    for(int i = 0; i < odd_index; i++) {
        array[array_index++] = odd[i];
    }
}
