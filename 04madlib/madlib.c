/* Problem 04: Mad Lib */

#include <stdio.h>
#include <inputfunctions.h>

static const int BUF_SIZE = 1024;

int main()
{
    // buffers for inputs
    char noun[BUF_SIZE], verb[BUF_SIZE], adjective[BUF_SIZE], adverb[BUF_SIZE];

    // get inputs
    printf("Enter a noun: ");
    simpleinput(noun, BUF_SIZE);
    printf("Enter a verb: ");
    simpleinput(verb, BUF_SIZE);
    printf("Enter an adjective: ");
    simpleinput(adjective, BUF_SIZE);
    printf("Enter an adverb: ");
    simpleinput(adverb, BUF_SIZE);

    // print output
    printf("Do you %s your %s %s %s? That's hilarious!\n",
        verb, adjective, noun, adverb);

    return 0;
}
