/* Problem 10: Self-Checkout */

#include <stdio.h>
#include <math.h>
#include <inputfunctions.h>

static const double TAX_RATE = 0.055;

inline double cents_to_dollars(unsigned int cents)
{
    return (double) cents / 100.0;
}

int main()
{
    // variables used
    unsigned int subtotal_cents = 0; // subtotal in cents
    double price; // current price of item
    unsigned int quantity; // quantity of current item
    unsigned int number_items; // number of items

    // get number of items
    printf("How many items to checkout? ");
    simplescanf("%u", &number_items);

    // get price and quantity of each item
    for (int i = 1; i <= number_items; i++)
    {
        // get input
        printf("Enter the price of item %d: ", i);
        simplescanf("%lf", &price);
        printf("Enter the quantity of item %d: ", i);
        simplescanf("%u", &quantity);

        // add to subtotal
        subtotal_cents += (unsigned int) (price * quantity * 100);
    }

    // calculate tax
    unsigned int tax_cents = (unsigned int) (round((double) subtotal_cents * TAX_RATE));

    // print output
    printf("Subtotal: $%.2lf\n", cents_to_dollars(subtotal_cents));
    printf("Tax: $%.2lf\n", cents_to_dollars(tax_cents));
    printf("Total: $%.2lf\n", cents_to_dollars(subtotal_cents + tax_cents));

    return 0;
}
