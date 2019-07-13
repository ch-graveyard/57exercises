/* Problem 07: Area of a Rectangular Room */

#include <stdio.h>
#include <inputfunctions.h>

#define SQ_FEET_TO_SQ_METRES 0.09290304

int main()
{
    // room length and width
    double length, width;

    // get input
    printf("What is the length of the room in feet? ");
    simplescanf("%lf", &length);
    printf("What is the width of the room in feet? ");
    simplescanf("%lf", &width);

    // calculate areas
    double area_sqft = length * width;
    double area_sqm = area_sqft * SQ_FEET_TO_SQ_METRES;

    // print output
    printf("The area is\n");
    printf("%d square feet\n", (int)area_sqft);
    printf("%.3lf square metres\n", area_sqm);

    return 0;
}