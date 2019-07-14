/* Problem 09: Paint Calculator */

#include <stdio.h>
#include <math.h>
#include <inputfunctions.h>

static const int SQFT_PER_GALLON = 350;

int main()
{
    // length and width of ceiling
    double length, width;

    // get user input for length and width
    printf("What is the length of the ceiling? ");
    simplescanf("%lf", &length);
    printf("What is the width of the ceiling? ");
    simplescanf("%lf", &width);
    printf("\n");

    // calculate area in square feet and gallons required
    double area = length * width;
    int gallons = (int)ceil(area / SQFT_PER_GALLON);

    // print output
    printf("You will need to purchase %d gallons of\n", gallons);
    printf("paint to cover %d square feet.\n", (int)area);

    return 0;
}
