#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character (c) to #stdout
 * @c: The character to print
 *
 * Return:1 (success)
 * Return: -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
