#include "shell.h"

int execute_command(char **args) {
    pid_t pid, wpid;
    int status;

    pid = fork_process();
    if (pid == 0) {
        // Child process
        if (execvp(args[0], args) == -1) {
            fprintf(stderr, "Error: %s\n", strerror(errno));
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        // Error forking
        fprintf(stderr, "Error: %s\n", strerror(errno));
    } else {
        // Parent process
        wait_for_process(pid);
    }

    return 1;
}

