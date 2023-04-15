#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define MAX_LEN 256

int main()
{
    char command[MAX_LEN];
    char *args[MAX_LEN/2 + 1]; // command line arguments
    int status;

    while (1) {
        // print prompt
        printf("simple_shell> ");

        // read command
        if (fgets(command, MAX_LEN, stdin) == NULL) {
            printf("\n");
            break;
        }

        // remove trailing newline
        if (command[strlen(command)-1] == '\n') {
            command[strlen(command)-1] = '\0';
        }

        // parse command line
        args[0] = strtok(command, " ");
        int i = 0;
        while (args[i] != NULL) {
            args[++i] = strtok(NULL, " ");
        }

        // execute command
        if (execvp(args[0], args) == -1) {
            fprintf(stderr, "Error: %s\n", strerror(errno));
        }
    }

    return 0;
}
