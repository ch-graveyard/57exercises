/* Problem 01: Saying Hello */

#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

int main()
{
    // buffer for user to input their name
    char name[BUF_SIZE];

    // get user input
    printf("What is your name? ");
    fgets(name, BUF_SIZE, stdin);

    // strip newline
    name[strcspn(name, "\n")] = 0;

    // say hello
    printf("Hello, %s, nice to meet you!\n", name);

    return 0;
}
