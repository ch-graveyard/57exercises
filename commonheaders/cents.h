/* Header containing functions to convert floating point monetary values to
   cents and vice versa. */

#ifndef __CENTS_H_INCLUDED__
#define __CENTS_H_INCLUDED__

#include <math.h>

inline double cents_to_dollars(unsigned int cents)
{
    return (double) cents / 100.0;
}

inline unsigned int dollars_to_cents_round(double dollars)
{
    return (unsigned int) (round(dollars * 100.0));
}

inline unsigned int dollars_to_cents_ceil(double dollars)
{
    return (unsigned int) (ceil(dollars * 100.0));
}

#endif
