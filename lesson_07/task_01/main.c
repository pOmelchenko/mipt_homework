#include <stdio.h>

void print_num(int num)
{
    if (num == 0) {
        return;
    }
    int digit = num % 10;
    print_num(num / 10);
    fprintf(stdout, "%d ", digit);
}

int main(void)
{
    int num;
    scanf("%d", &num);

    print_num(num);
}
