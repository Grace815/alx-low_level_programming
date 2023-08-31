#include "main.h"
#include <unistd.h>
/**
 * _putchar - stdout is updated with the character C.
 * @c: The character to print
 *
 * Return: On success 1.
 * Errno is set appropriately and -1 is returned in the event of an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
