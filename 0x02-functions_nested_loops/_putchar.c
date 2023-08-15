#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stduot
 * @c: The character tp print
 *
 * Return: On success 1.
 *	   On error, -1 is return, and error is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
