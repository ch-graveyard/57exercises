/* Problem 03: Printing Quotes */

#include <stdio.h>
#include <inputfunctions.h>

#define BUF_SIZE 1024

int main()
{
    // buffers for quote and author
    char quote[BUF_SIZE], author[BUF_SIZE];

    // get input
    printf("What is the quote? ");
    simpleinput(quote, BUF_SIZE);
    printf("Who said it? ");
    simpleinput(author, BUF_SIZE);

    // concatenate strings for output
    char output[BUF_SIZE];
    strcpy(output, "");
    strcat(strcat(strcat(strcat(output, author),
        " says, \""), quote), "\"");

    // print output
    printf("%s\n", output);

    return 0;
}
