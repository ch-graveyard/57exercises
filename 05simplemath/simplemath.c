/* Problem 05: Simple Math */

#include <stdio.h>
#include <simpleinput.h>

#define BUF_SIZE 1024

int main()
{
    // input numbers
    double a, b;

    // get inputs
    printf("What is the first number? ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Malformed input, aborting.\n");
        return -1;
    }
    printf("What is the second number? ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Malformed input, aborting.\n");
        return -1;
    }

    // print outputs
    printf("%d + %d = %d\n", (int)a, (int)b, (int)(a + b));
    printf("%d - %d = %d\n", (int)a, (int)b, (int)(a - b));
    printf("%d * %d = %d\n", (int)a, (int)b, (int)(a * b));
    printf("%d / %d = %d\n", (int)a, (int)b, (int)(a / b));

    return 0;
}