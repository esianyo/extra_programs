#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main()
{
	char word[MAX_LENGTH];
	int length;printf("Please enter a string: \n");

	fgets(word, MAX_LENGTH, stdin);
	length = strlen(word) - 1;
	printf("Size of your string is: %d", length);
	printf("\n");

	return (0);
}
