#include <stdio.h>
/**
 *main - This is the entry point
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
	int a;
	long int c;
	long long int e;
	char d;
	float b;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("The above are various sizes of data types in computer memory.\n");
	return (0);
}
