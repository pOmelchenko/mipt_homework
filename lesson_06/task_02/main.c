#include <stdio.h>
#include <inttypes.h>

void var_one(uint64_t num)
{
    uint64_t result = 1;
    for (uint64_t i = 1; i < num; i++) {
        result *= 2;
    }

    fprintf(stdout, "%" PRIu64 "\n", result);
}

void var_two(uint64_t num)
{
    fprintf(stdout, "%" PRIu64 "\n", (uint64_t) 1 << (num - 1));
}

int main(void)
{
    uint64_t num;
    scanf("%"SCNu64, &num);

    if (num < 1 || num > 64) {
        fprintf(stderr, "число должно быть в диапазоне от 1 до 64\n");
        return 1;
    }

//    var_one(num);
    var_two(num);

    return 0;
}

