#include "main.h"
/**
 * flip_bits - upverses bits
 * @n: first int
 * @m: second int
 * Return: unsigInt number value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
