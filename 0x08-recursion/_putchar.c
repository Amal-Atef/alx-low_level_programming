#include "main.h"
#include <unistd.h>
/**
 * putchar : writes character C to stdout.
 * C : character To print.
 *
 * Success : Return (1)
 * Error : Return (-1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
