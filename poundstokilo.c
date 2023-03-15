#include <stdio>

/**
 * main - converts pounds to kilograms
 *
 * Return: 0 for success
 */


int main()
{
	float pound, kilo;

	/* prompt user to input pound value */

	printf("Enter value in pounds: ");
	scanf("%f", &pound);

	kilo = pound * 0.454;

	printf("%f pounds in kilogram is: %f kg.", pound, kilo);

	return (0);
}
