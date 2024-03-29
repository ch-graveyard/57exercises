/* Problem 01: Saying Hello */

#include <stdio.h>
#include <inputfunctions.h>

static const int BUF_SIZE = 1024;

int main()
{
    // buffer for user to input their name
    char name[BUF_SIZE];

    // get user input
    printf("What is your name? ");
    simpleinput(name, BUF_SIZE);

    // say hello
    printf("Hello, %s, nice to meet you!\n", name);

    return 0;
}
