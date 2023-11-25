#define _POSIX_C_SOURCE 200809L
#include "bk_factor.h"
#include <inttypes.h>

/**
 *bk_factorize - Function that factorizes number
 *
 *@buffer: pointer to the address of the number
 *
 * Return: int
 */

int bk_factorize(char *buffer) 
{


    uint32_t number;
    uint32_t n;

    number = atoi(buffer);

    for (n = 2; n < number; n++) {
        if (number % n == 0) {
            printf("%" PRIu32 "=%" PRIu32 "*%" PRIu32 "\n", number, n, number / n);
            return 0;
        }
    }

    return 0;
}
