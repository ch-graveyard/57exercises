/* Problem 06: Retirement Calculator */

#include <stdio.h>
#include <time.h>
#include <inputfunctions.h>

int main()
{
    // get current year
    time_t timer;
    time(&timer);
    struct tm result;
    localtime_r(&timer, &result);
    int current_year = result.tm_year + 1900;

    // user input variables
    int current_age;
    int retirement_age;

    // get user input
    printf("What is your current age? ");
    simplescanf("%d", &current_age);
    printf("At what age would you like to retire? ");
    simplescanf("%d", &retirement_age);

    // calculate time till retirement
    int years_till_retirement = retirement_age - current_age;

    // print output
    if (years_till_retirement <= 0)
    {
        printf("You can already retire.\n");
    }
    else
    {
        printf("You have %d years left until you can retire.\n",
            years_till_retirement);
        printf("It's %d, so you can retire in %d.\n", current_year,
            current_year + years_till_retirement);
    }

    return 0;
}
    