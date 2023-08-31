#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @n: change pointer to the number
 * @index: clear index of the bit
 *
 * Return: on success 1, on failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
