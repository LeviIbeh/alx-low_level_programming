#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - clears bitindex to 0
 * @n: inserted index
 * @index: index to go through
 * Return: returns error val
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
