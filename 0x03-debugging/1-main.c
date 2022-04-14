#include <stdio.h>

/**
 * main - resolved an infinite loop
 * Return: 0
 */

int main(void)
{
int i;
printf("Infinite loop incoming :(
");

i = 0;

while (i < 10)
{
i++; /* putchar(i); */
}

printf("Infinite loop avoided! \o/
");

return (0);
} 
