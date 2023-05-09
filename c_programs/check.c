#include <stdio.h>

/**
 * main - check whether patient takes in water
 *
 * Return: 0 for success
 */

int main()
{
	int response;

	printf("Do you take in lots of water?\n1. Yes\n2. No\n");

	scanf("%d", &response);

	if (response == 1)
	{
		printf("Not dehydrated.\n");
	}

	else if (response == 2)
	{
		printf("Dehydrated.\n");
	}

	else
	{
		printf("Wrong input. Please try again.\n");
	}

	return (0);
}
