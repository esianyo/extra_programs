#include "main.h"

/**
 * main - entry to program
 *
 * Return: 0 for success
 */

int main(void)
{
	char *name = "_putchar";
	int c;

	for (c = 0; name[c] != '\0'; c++)
	{
		_putchar(name[c]);
	}

	_putchar('\n');

	return (0);
}
