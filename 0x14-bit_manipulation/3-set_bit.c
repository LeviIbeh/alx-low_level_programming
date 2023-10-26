#include "main.h"
/**
 * set_bit - sets bit value
 * @n: number set
 * @index: location index to set
 *
 * Return: 1 in suc, or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
