#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool has(char ch_in, FILE *output)
{
    char ch_out;

    printf("- %c has\n", ch_in);

    fseek(output, 0, SEEK_SET);
    while ((ch_out = fgetc(output)) != EOF) {
        if (ch_in == ch_out) {
            printf("- %c = %c has\n", ch_in, ch_out);
            return true;
        }
    }

    return false;
}

int main(void)
{
    FILE *input, *output;
    char ch_in, ch_out;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "a+");

    if (input == NULL || output == NULL) {
        printf("file is not opened");
        return 1;
    }

    while ((ch_in = fgetc(input)) != EOF) {
        if (has(ch_in, output) || !isalpha(ch_in) || isspace(ch_in)) {
            continue;
        } else {
            fputc(ch_in, output);
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}