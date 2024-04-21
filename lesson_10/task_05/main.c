#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

struct longest_word {
    int position;
    int length;
};

int main(void)
{
    FILE *input, *output;
    bool word = false;
    char ch_in;
    int word_length = 0, position = 0;
    struct longest_word longest_word = {0, 0};

    input = fopen("input.txt", "r");

    while((ch_in = fgetc(input)) != EOF) {
        if (isalpha(ch_in) && !isspace(ch_in)) {
            word = true;
            word_length++;
        } else if (word == true) {
            word = false;
            if (longest_word.length < word_length) {
                longest_word.length = word_length;
                longest_word.position = position - word_length;
            }
            word_length = 0;
        }
        position++;
    }

    if (longest_word.length < word_length) {
        longest_word.length = word_length;
        longest_word.position = position - word_length;
    }

    fseek(input, longest_word.position, SEEK_SET);

    output = fopen("output.txt", "w");

    for (int i = 0; i < longest_word.length; i++) {
        fputc(fgetc(input), output);
    }

    fclose(output);
    fclose(input);

    return 0;
}
