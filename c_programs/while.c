#include <stdio.h>

/**
 * main - prints numbers from 50 to 0
 *
 * Return: 0 for success
 */

int main(void)
{
	int num;

	num = 51;

	while (num > 0)
	{
		num--;
		printf("%d\n", num);
	}
	
	return (0);
}
