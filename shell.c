#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 256

char **parse_command(char *command)
{
	char **args = malloc(MAX_LEN / 2 + 1);
	args[0] = strtok(command, " ");
	int i = 0;
	while (args[i] != NULL)
		args[++i] = strtok(NULL, " ");
	return (args);
}
