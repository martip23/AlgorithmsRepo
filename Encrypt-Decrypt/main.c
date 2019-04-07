/*
 * NAME: Patrick Martinez
 * Serial Number: 32
 * Assignment Number: 3
 * Due Date: 3/27/2019
 *
 * NOT ALLOWED TO USE BUILT-IN C LIBRARIES
 */

#include <stdio.h>

// Presents prompt and updates choice
void prompt(char choice[]) {
    printf(""
           "What would you like to do to a message? (encrypt, decrypt, exit)"
           "Enter your choice: ");
    getline(&choice, 254, stdin);
    printf(choice);

    if (choice != 'steak') {
        printf("You chose the wrong meal, buddy.");
    }

}

int main() {

    char choice[256] = "";
    printf("Welcome to cryptography.");

    prompt(choice);

    return 0;
}