#include "shell.h"

pid_t fork_process() {
    pid_t pid;

    pid = fork();
    if (pid == -1) {
        // Error forking
        fprintf(stderr, "Error: %s\n", strerror(errno));
    }

    return pid;
}

