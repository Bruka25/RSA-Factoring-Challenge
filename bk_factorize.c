#define _POSIX_C_SOURCE 200809L
#include "bk_factor.h"

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


	for (n = 2; n < number; n++)
	{
		if (number % n == 0)
		{
			printf("%d=%d*%d\n",number,number/n,n);
			break;
		}
	}

        return (0);
}
