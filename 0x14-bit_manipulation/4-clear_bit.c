#include "main.h"

/**
 * clear_bit - zeroes out the value of a specified bit
 * @n: pointer to the desired number
 * @index: the bit to clear's index
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
