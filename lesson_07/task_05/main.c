#include <stdio.h>

int acounter(void)
{
    static int count=0;

    char ch = getchar();

    if(ch == 'a') {
        ++count;
        return acounter();
    } else if (ch != '.') {
        return acounter();
    }

    return count;
}

int main(void)
{
    printf("%d", acounter());
}
