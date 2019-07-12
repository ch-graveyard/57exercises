/* Problem 02: Counting the Number of Characters */

#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024

int main()
{
    // buffer for input string
    char buffer[BUF_SIZE];

    // get user input
    printf("What is the input string? ");
    fgets(buffer, BUF_SIZE, stdin);

    // strip newline
    buffer[strcspn(buffer, "\n")] = 0;

    // calculate and print number of characters
    printf("%s has %d characters.\n",
        buffer,
        (int)strlen(buffer));

    return 0;
}
