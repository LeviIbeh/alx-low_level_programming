#include "main.h"
/**
 * set_bit - sets a bit
 * @n: integer to grab
 * @index: index of bit set
 * Return: 1 for suc, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
