#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>
#include <pthread.h>

int hailstone(int n);
int *sumHalf(void *vargp, int part);

int main(int argc, char *argv[]) {
    printf("Name: Patrick Martinez CS 4350 - Unix Systems Programming\n"
           "Serial #: 32\n"
           "Assignment Number: 6\n"
           "Due Date: 5/6/2019 @ 2:00 PM\n\n"

           "Welcome to Patrick Martinez's Program\n\n"
           "This program will do the following: \n\n"
           "Opens two pipes, one to the ls command, and the other to sort. Displays output on the screen.\n\n"
           "Takes the three positive integers m, n, and r from it's command line arguments, using fork, create "
           "three child processes, wait for them to compete and exit. The first process sorts m random integers"
           "using bubble sort, the second computes the factorial of n, and the third process computes the "
           "hailstone sequence. \n\n"
           "Using threads, parallelize a sequential program to compute the sum of an array of size 50 "
           "of integers from 1 to 2500.\n\n");

    srand(time(NULL));

    int fd1[2];
    int fd2[2];

    int pid, pid2;

    pipe(fd1);
    printf("1 - Performing ls | sort\n\n");

    pid = fork();
    // Parent
    if (pid > 0) {

    }
    // Child
    else {
        pid2 = fork();
        if (pid > 0) {
            char *argv[] = {"sort", NULL};

            close (0);
            dup (fd1[0]);
            close(fd1[0]);
            close(fd1[1]);

            execvp(argv[0], argv);
        } else {
            char *argv[] = {"ls", NULL};

            close(1);
            dup(fd1[1]);
            close(fd1[1]);
            close(fd1[0]);
            execvp(argv[0], argv);
        }
    }

    char c;

    pid = fork();
    if (pid < 0)
        printf("Fork failed");

    if (pid == 0) {
        printf("\n\n2 - Bubble Sort Process Started\n"
               "Input Number: %s", argv[1]);

        int sortArray[100];
        printf("\n%s generated random numbers :\n", argv[1]);

        for (int i = 0; i < atoi(argv[1]); i++) {
            sortArray[i] = (rand() % 2500) + 1;
            printf("%d   ", sortArray[i]);

        }
        sortArray[atoi(argv[1])] = -1;
        for (int i = 0; i < atoi(argv[1]); i++) {
            for (int j = 0; j < atoi(argv[1]) - 1; j++) {
                if (sortArray[j] > sortArray[j+1]) {
                    int tmp = sortArray[j];
                    sortArray[j] = sortArray[j+1];
                    sortArray[j + 1] = tmp;
                }
            }
        }
        printf("\nSorted sequence :\n");
        for (int i = 0; i < atoi(argv[1]); i++) {
            printf("%d   ", sortArray[i]);
        }
        printf("\nBubble Sort Process Exits\n\n");


        exit(1);
    }
    else if (pid > 0) {
        wait(NULL);
    }

    pid = fork();
    if (pid < 0)
        printf("Fork failed");

    if (pid == 0) {
        int factorial = 1;
        printf("\n\nFactorial Process Started\n"
               "Input Number: %s\n", argv[2]);
        for (int i = 1; i <= atoi(argv[2]); i++) {
            factorial*=i;
        }
        printf("Factorial number f(%d) is %d\n", atoi(argv[2]), factorial);
        printf("Factorial process exits\n\n");

        exit(1);
    }
    else if (pid > 0) {
        wait(NULL);
    }

    pid = fork();
    if (pid < 0)
        printf("Fork failed");

    if (pid == 0) {
        int startNum = atoi(argv[3]);
        printf("\n\nHailstone Process Started\n"
               "Input Number: %s\n", argv[3]);

        printf("Hailstone sequence of %d is : %d, ", startNum, startNum);
        while (startNum > 1) {
            startNum = hailstone(startNum);
            printf("%d", startNum);
            if (startNum > 1)
                printf(", ");
        }
        printf("\n");
        printf("Hailstone process exits\n\n");

        exit(1);
    }
    else if (pid > 0) {
        wait(NULL);
    }

    int sumArray[50];

    for (int i = 0; i < 50; i++) {
        sumArray[i] = rand();
    }

    printf("3 - Performing int[50] sum using two threads...");
    char *argv1[] = {"1", sumArray};
    char *argv2[] = {"2", sumArray};
    pthread_t thread_id;
    pthread_t thread_id2;
    pthread_create(&thread_id, NULL, sumHalf, argv1);
    pthread_create(&thread_id2, NULL, sumHalf, argv2);


    printf("end\n");

    return 0;
}

int hailstone(int n) {
    if (n % 2 == 0)
        return (n /= 2);
    else
        return n = 3 * n + 1;
}