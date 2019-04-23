#include <stdio.h>
#include <sys/unistd.h>

int main() {
    printf("NAME: Patrick Martinez CS 4350 - Unix Systems Programming\n"
           "\n"
           "Serial Number: 32\n"
           "Assignment Number: 5\n"
           "Due Date: 4/24/2019\n"
           "Instructors Name: Husain Gholoom"
           "\n\n"
           "Directory and file manipulation.\n");

    char *args[2];
    args[0] = "bin/ls";
    args[1] = NULL;

    if ( fork() == 0 )
        execv( args[0], args);

    else
        wait ( );

    return 0;
}