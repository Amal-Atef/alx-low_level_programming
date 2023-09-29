#include "main.h"
/**
 * _puts_recursion - this function like puts();
 * @s: input
 * Return: 0 always (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
