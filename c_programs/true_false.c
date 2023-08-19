#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: True if agreed is 2 and False if 1
 */

int main(void)
{
	bool agreed;
	int ans;

	printf("Do you agree to the terms and conditions?\nMake A Choice From the Options Below.\n1. NO\n2. YES\nEnter Your Choice: ");
	scanf("%d", &ans);

	agreed = (bool)ans;

	if (agreed)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
