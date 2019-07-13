/* Problem 04: Mad Lib */

#include <stdio.h>
#include <simpleinput.h>

#define BUF_SIZE 1024

int main()
{
    // buffers for inputs
    char noun[BUF_SIZE], verb[BUF_SIZE], adjective[BUF_SIZE], adverb[BUF_SIZE];

    // get inputs
    printf("Enter a noun: ");
    input(noun, BUF_SIZE);
    printf("Enter a verb: ");
    input(verb, BUF_SIZE);
    printf("Enter an adjective: ");
    input(adjective, BUF_SIZE);
    printf("Enter an adverb: ");
    input(adverb, BUF_SIZE);

    // print output
    printf("Do you %s your %s %s %s? That's hilarious!\n",
        verb, adjective, noun, adverb);

    return 0;
}
