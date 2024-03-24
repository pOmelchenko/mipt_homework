#include <stdio.h>

int main(void)
{
    int month;

    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("wrong month number\n");
        return 1;
    }

    switch (month) {
        // winter
        case 12:
        case 1:
        case 2:
            printf("winter\n");
            break;
            // spring
        case 3:
        case 4:
        case 5:
            printf("spring\n");
            break;
            // summer
        case 6:
        case 7:
        case 8:
            printf("summer\n");
            break;
            // autumn
        case 9:
        case 10:
        case 11:
            printf("autumn\n");
            break;
        default:
            printf("wrong month number\n");
            return 1;
    }

    return 0;
}
