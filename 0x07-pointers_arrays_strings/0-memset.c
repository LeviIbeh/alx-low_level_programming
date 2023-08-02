#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of rimes
 * REturn: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	or (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
