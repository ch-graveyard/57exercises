/* Header containing input functions commonly used for my purposes. */

#ifndef __INPUTFUNCTIONS_H_INCLUDED__
#define __INPUTFUNCTIONS_H_INCLUDED__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Gets input using fgets and strips newline
// Stores the input in the given buffer
void simpleinput(char* buffer, int buf_size)
{
    if (fgets(buffer, buf_size, stdin) == NULL)
    {
        printf("Error getting input, aborting.\n");
        exit(-1);
    }
    buffer[strcspn(buffer, "\r\n")] = 0;
}

// Wrapper around scanf that handles malformed input
// Only works for single variable scanf
void simplescanf(char* format, void* ptr)
{
    if (scanf(format, ptr) != 1)
    {
        printf("Malformed input, aborting.\n");
        exit(-1);
    }
}

#endif
