#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    FILE *input, *output;
    char ch_in, last_ch;
    bool word = false;
    int a_count = 0;

    input = fopen("input.txt", "r");
    while ((ch_in = fgetc(input)) != EOF) {
        if (isalpha(ch_in) && !isspace(ch_in)) {
            last_ch = ch_in;
            word = true;
        } else if (word == true && last_ch == 'a') {
            ++a_count;
            word = false;
        }
    }
    fclose(input);

    output = fopen("output.txt", "w");
    fprintf(output, "%d", a_count);
    fclose(output);
    // printf("%d", a_count);

    return 0;
}
