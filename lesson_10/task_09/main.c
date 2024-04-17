#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    FILE *input, *output;

    input = fopen("input.txt","r");
    output = fopen("output.txt","w");

    char ch;
    bool space = false, letter = false;
    while ((ch = fgetc(input)) != EOF) {
        if (ch == ' ') {
            space = true;
            continue;
        } else {
            if (space == true && letter == true) {
                fputc(' ', output);
            }
            fputc(ch, output);
            space = false;
            letter = true;
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
