#include "main.h"
/**
 * get_bit - obtains bit index
 * @n: number to go through
 * @index: index to go through
 * Return: value of integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
