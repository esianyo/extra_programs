#include <stdio.h>
#include <string.h>

int main()
{
	char name[100];
	int age;

	printf("Hey friend, what is your name?: ");
	scanf("%s", name);

	printf("Hey %s, how old are you?: ", name);
	scanf("%d", &age);

	printf("Nice. So your name is %s and you are %d years old.", name, age);

	return 0;
}
