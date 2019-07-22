/* Problem 14: Tax Calculator */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <inputfunctions.h>
#include <cents.h>

static const double tax_rate = 0.055;
static const char *tax_state = "WI";

int main()
{
    // input variables
    double subtotal;
    char state[3];

    // get input
    printf("What is the order amount? ");
    simplescanf("%lf", &subtotal);
    printf("What is the state? ");
    simplescanf("%2s", state);

    // check if state is WI
    if (strcmp(state, tax_state) == 0)
    {
        // print subtotal
        printf("The subtotal is $%.2lf.\n", subtotal);

        // calculate tax and total
        unsigned int subtotal_cents = dollars_to_cents_ceil(subtotal);
        unsigned int tax_cents =
            (unsigned int)ceil((double) subtotal_cents * tax_rate);
        double total = cents_to_dollars(subtotal_cents + tax_cents);

        // print tax and total
        printf("The tax is $%.2lf.\n", cents_to_dollars(tax_cents));
        printf("The total is $%.2lf.\n", total);
    }

    // print total directly if in other states
    else
    {
        printf("The total is $%.2lf.\n", subtotal);
    }

    return 0;
}
