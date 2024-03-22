#include <stdio.h>

int nod(int a, int b)
{
    int min = a < b ? a : b;

    for (int divider = min; divider >= 0; divider--) {
        if ((a % divider == 0) && (b % divider == 0)) {
            return divider;
        }
    }

    return 0;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

//    fprintf(stdout, "NOD for a = %d and b = %d is %d", a, b, nod(a, b));
    fprintf(stdout, "%d", nod(a, b));

    return 0;
}
