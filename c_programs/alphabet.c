#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
		_putchar(lowCase);
	_putchar('\n');;
}
