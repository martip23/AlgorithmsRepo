#include <stdio.h>
#include <sys/unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    printf("NAME: Patrick Martinez CS 4350 - Unix Systems Programming\n"
           "\n"
           "Serial Number: 32\n"
           "Assignment Number: 5\n"
           "Due Date: 4/24/2019\n"
           "Instructors Name: Husain Gholoom"
           "\n\n"
           "Directory and file manipulation.\n"
           "\n");

    int status;
    char *args[10] = { "ls", "-l", NULL};

    if ( fork() == 0 ) {
        printf("\nThe content of the current directory:  \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "cp";
    args[1] = "Zold.c";
    args[2] = "Znew.txt";
    args[3] = NULL;

    if ( fork() == 0 ) {
        printf("\n\"Znew.txt\" is created: \n\n");
        execvp(args[0], args);

    } else wait (&status );

    args[0] = "cat";
    args[1] = "Znew.txt";
    args[2] = NULL;

    if ( fork() == 0 ) {
        printf("\nThe content of Znew.txt: \n\n");
        execvp(args[0], args);

    } else wait (&status);

    args[0] = "wc";
    args[1] = "-c";
    args[2] = "Znew.txt";
    args[3] = NULL;

    if ( fork() == 0 ) {
        printf("\nThe size of Znew.txt: \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "wc";
    args[1] = "-w";
    args[2] = "Znew.txt";
    args[3] = NULL;

    if ( fork() == 0 ) {
        printf("\nNumber of words in Znew.txt: \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "wc";
    args[1] = "-c";
    args[2] = "Znew.txt";
    args[3] = NULL;

    if ( fork() == 0 ) {
        printf("\nNumber of characters in Znew.txt: \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "wc";
    args[1] = "-l";
    args[2] = "Znew.txt";
    args[3] = NULL;

    if ( fork() == 0 ) {
        printf("\nNumber of lines in Znew.txt: \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "grep";
    args[1] = "-c";
    args[2] = "-E";
    args[3] = ";$";
    args[4] = "Znew.txt";
    args[5] = NULL;

    if ( fork() == 0 ) {
        printf("\nNumber of lines in Znew.txt ending in ;: \n");
        execvp(args[0], args);
    } else wait (&status );

    args[0] = "rm";
    args[1] = "Znew.txt";
    args[2] = NULL;

    if ( fork() == 0 ) {
        printf("\nZnew.txt file deleted successfully \n");
        execvp(args[0], args);
    } else wait (&status );

    printf("Implemented by Patrick Martinez\n\n"
           "4/24/2019\n");

    return 0;
}