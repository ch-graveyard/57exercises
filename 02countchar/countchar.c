/* Problem 02: Counting the Number of Characters */

#include <stdio.h>
#include <simpleinput.h>

#define BUF_SIZE 1024

int main()
{
    // buffer for input string
    char buffer[BUF_SIZE];

    // get user input
    printf("What is the input string? ");
    input(buffer, BUF_SIZE);

    // calculate and print number of characters
    printf("%s has %d characters.\n",
        buffer,
        (int)strlen(buffer));

    return 0;
}
