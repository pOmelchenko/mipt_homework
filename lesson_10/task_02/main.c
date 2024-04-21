#include <stdio.h>

int main(void)
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("file is not opened");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (ch == 'a' || ch == 'A') {
            fputc(++ch, output);
        } else if (ch == 'b' || ch == 'B') {
            fputc(--ch, output);
        } else {
            fputc(ch, output);
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}