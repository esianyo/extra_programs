#include <stdio.h>

/**
 * main - program to accept three numbers, 
 * multiplies first and last numbers
 * and divides results by second number
 *
 * Return: 0 for succes
 */

int main()
{
	int num1, num2, num3, product, divide;

	printf("A Program that Accepts Three Numbers,\nMultiplies First and Last Number\nAnd Divide by Second Number\n");

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("Enter third number: ");
	scanf("%d", &num3);

	printf(" \n");
	product = num1 * num3;
	printf("The product of first and last numbers is: %d\n", product);

	divide = product / num2;
	printf("The division of the product by the second number is: %d\n", divide);

	return (0);
}
