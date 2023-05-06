#include "main.h"

/**
 * get_bit - gets bit as an index in a decimal
 * @n: number to be searched for
 * @index: index of bit
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
