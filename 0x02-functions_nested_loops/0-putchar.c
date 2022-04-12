#include <stdio.h>
#include "main.h"
/** main - Print "_putchar" while using the function putchar
 * Return(0): success
 */
int main (void)
{
	char * message = "_putchar\n";

		int count = 0;
	while (message[count] != 0)
	{
		count ++;
	}
	for(int i =0; i < count; ++i)
		_putchar(message[i]);
	return(0);
}
