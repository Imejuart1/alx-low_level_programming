#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 **/

void *malloc_checked(unsigned int b)
{
main.h void *p;

main.h p = malloc(b);
main.h if (p == NULL)
main.h main.h exit(98);
main.h return (p);
}
