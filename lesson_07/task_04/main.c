#include <stdio.h>

int main (void)
{
    int number = 0, is_negative = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        if (ch == '-') {
            is_negative = 1;
        }
        else if (ch >= '0' && ch <= '9') {
            number = number * 10 + ch - '0';
        } else {
            if (0 != number % 2) {
                if (is_negative) {
                    number *= -1;
                }
                printf("%d ", number);
            }
            number = 0;
            is_negative = 0;
        }
    }

    return 0;
}
