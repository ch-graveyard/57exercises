/* Problem 08: Pizza Party */

#include <stdio.h>
#include <inputfunctions.h>

static const unsigned int PIECES_PER_PIZZA = 8;

int main()
{
    // number of people and pizzas
    unsigned int people, pizzas;

    // get input
    printf("How many people? ");
    simplescanf("%u", &people);
    printf("How many pizzas do you have? ");
    simplescanf("%u", &pizzas);
    printf("\n");

    // calculate pizzas per person
    unsigned int pieces = pizzas * PIECES_PER_PIZZA;
    unsigned int pieces_per_person = pieces / people;
    unsigned int leftover_pieces = pieces - pieces_per_person * people;

    // print output
    printf("%d people with %d pizzas\n", people, pizzas);
    if (pieces_per_person == 1)
    {
        printf("Each person gets 1 piece of pizza.\n");
    }
    else
    {
        printf("Each person gets %d pieces of pizza.\n", pieces_per_person);
    }
    if (leftover_pieces == 1)
    {
        printf("There is 1 leftover piece.\n");
    }
    else
    {
        printf("There are %d leftover pieces.\n", leftover_pieces);
    }

    return 0;
}
