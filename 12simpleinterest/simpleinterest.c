/* Problem 12: Computing Simple Interest */

#include <stdio.h>
#include <math.h>
#include <inputfunctions.h>
#include <cents.h>

int main()
{
    // variables for user input
    double principal;
    double rate;
    unsigned int years;

    // get input
    printf("Enter the principal: ");
    simplescanf("%lf", &principal);
    printf("Enter the rate of interest: ");
    simplescanf("%lf", &rate);
    printf("Enter the number of years: ");
    simplescanf("%u", &years);
    printf("\n");

    // calculate final worth
    unsigned int principal_cents = dollars_to_cents_round(principal);
    unsigned int final_cents =
        ceil((double)principal_cents * (1.0 + (rate/100.0) * years));

    // print output
    printf("After %u years at %.1lf%%, the investment will\n", years, rate);
    printf("be worth $%u.\n", (unsigned int) cents_to_dollars(final_cents));

    return 0;
}
