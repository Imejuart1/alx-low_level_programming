#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
.0-memset.c.swp unsigned int i;

.0-memset.c.swp for (i = 0; n > 0; i++, n--)
.0-memset.c.swp {
.0-memset.c.swp .0-memset.c.swp s[i] = b;
.0-memset.c.swp }
.0-memset.c.swp return (s);
}
