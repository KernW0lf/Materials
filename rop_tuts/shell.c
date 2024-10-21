#include <stdio.h>
#include <unistd.h>

int main() {
    char *cmd = "/bin/sh";
    execve(cmd,NULL,NULL);
}
