/* Problem 11: Currency Conversion */

#include <stdio.h>
#include <math.h>
#include <inputfunctions.h>
#include <cents.h>

int main()
{
    // get number of euros to exchange
    double euros;
    printf("How many euros are you exchanging? ");
    simplescanf("%lf", &euros);

    // convert to cents
    unsigned int euros_cents = dollars_to_cents_ceil(euros);

    // get exchange rate
    double exchange_rate;
    printf("What is the exchange rate? ");
    simplescanf("%lf", &exchange_rate);
    exchange_rate /= 100.0;

    // convert cents to US dollars
    unsigned int usd_cents = ceil(
        (double) euros_cents * exchange_rate
    );
    
    // print output
    printf("%.2lf euros at an exchange rate of %.2lf is\n%.2lf U.S. dollars.\n",
        euros, exchange_rate, cents_to_dollars(usd_cents));

    return 0;
}
