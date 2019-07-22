/* Problem 13: Determining Compound Interest */

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
    unsigned int compounds_per_year;

    // get input
    printf("What is the principal amount? ");
    simplescanf("%lf", &principal);
    printf("What is the rate? ");
    simplescanf("%lf", &rate);
    printf("What is the number of years? ");
    simplescanf("%u", &years);
    printf("What is the number of times the interest\n");
    printf("is compounded per year? ");
    simplescanf("%u", &compounds_per_year);

    // calculate final worth
    unsigned int principal_cents = dollars_to_cents_round(principal);
    unsigned int final_cents =
        ceil((double)principal_cents * pow((1.0 +
            (rate/(100.0 * compounds_per_year))),
            compounds_per_year * years));

    // print output
    printf("$%d invested at %.1lf%% for %d years\n",
        (int)round(principal), rate, years);
    printf("compounded %d times per year is $%.2lf.\n",
        compounds_per_year, (double)final_cents / 100.0);

    return 0;
}