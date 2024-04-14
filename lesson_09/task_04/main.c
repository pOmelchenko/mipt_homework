#include <stdio.h>

int great_than_awg(int rows, int cols, int array[rows][cols]);

int main(void)
{
    int numbers[5][5];
    scanf("%d%d%d%d%d", numbers[0] + 0, numbers[0] + 1, numbers[0] + 2, numbers[0] + 3, numbers[0] + 4);
    scanf("%d%d%d%d%d", numbers[1] + 0, numbers[1] + 1, numbers[1] + 2, numbers[1] + 3, numbers[1] + 4);
    scanf("%d%d%d%d%d", numbers[2] + 0, numbers[2] + 1, numbers[2] + 2, numbers[2] + 3, numbers[2] + 4);
    scanf("%d%d%d%d%d", numbers[3] + 0, numbers[3] + 1, numbers[3] + 2, numbers[3] + 3, numbers[3] + 4);
    scanf("%d%d%d%d%d", numbers[4] + 0, numbers[4] + 1, numbers[4] + 2, numbers[4] + 3, numbers[4] + 4);

    printf("%d", great_than_awg(5, 5, numbers));

    return 0;
}

int great_than_awg(int rows, int cols, int array[rows][cols])
{
    int avg = 0;
    for (int i = 0; i < rows; ++i) {
        avg += array[i][i];
    }
    avg /= 5;

    int counter = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > avg) {
                counter++;
            }
        }
    }

    return counter;
}