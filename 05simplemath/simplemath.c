/* Problem 05: Simple Math */

#include <stdio.h>
#include <inputfunctions.h>

#define BUF_SIZE 1024

int main()
{
    // input numbers
    double a, b;

    // get inputs
    printf("What is the first number? ");
    simplescanf("%lf", &a);
    printf("What is the second number? ");
    simplescanf("%lf", &b);

    // print outputs
    printf("%d + %d = %d\n", (int)a, (int)b, (int)(a + b));
    printf("%d - %d = %d\n", (int)a, (int)b, (int)(a - b));
    printf("%d * %d = %d\n", (int)a, (int)b, (int)(a * b));
    printf("%d / %d = %d\n", (int)a, (int)b, (int)(a / b));

    return 0;
}