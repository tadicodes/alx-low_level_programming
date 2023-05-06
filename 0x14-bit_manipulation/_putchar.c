#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: To print
 * Return: 1 when successful
 * For error return -1 and set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
