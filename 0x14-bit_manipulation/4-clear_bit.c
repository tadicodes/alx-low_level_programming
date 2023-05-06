#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer for number to change
 * @index: index of bit
 * Return: 1 success and -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
