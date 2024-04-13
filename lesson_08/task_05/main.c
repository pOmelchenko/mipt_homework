#include <stdio.h>

int main(void)
{
    int num[10], freq[20] = {0};
    scanf("%d%d%d%d%d%d%d%d%d%d",
          num + 0, num + 1, num + 2, num + 3, num + 4,
          num + 5, num + 6, num + 7, num + 8, num + 9
    );

    for (int i = 0; i < *(&num + 1) - num; i++) {
        for (int j = 0; j < *(&num + 1) - num - 1; j++) {
            if ((num[j]) > (num[j + 1])) {
                int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }

    int el = 0;

    freq[el] = num[0];

    for (int i = 1; i < *(&num + 1) - num; i++) {
        if (freq[el] == num[i]) {
            freq[el + 1] += 1;
        } else {
            el += 2;
            freq[el] = num[i];
        }
    }

    int best = -1;
    int * best_freq;

    for (int i = 1; i < *(&freq + 1) - freq; i += 2) {
        if (best < freq[i]) {
            best = freq[i];
            best_freq = freq + i - 1;
        }
    }

    printf("%d", *best_freq);

    return 0;
}