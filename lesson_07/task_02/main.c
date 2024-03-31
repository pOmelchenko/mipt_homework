#include <stdio.h>

void print_num(int a, int b)
{
    fprintf(stdout, "%d ", a);
    if (a == b) {
        return;
    }
    if (a > b) {
        --a;
    } else {
        ++a;
    }

    print_num(a, b);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    print_num(a, b);
}
