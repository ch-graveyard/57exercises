/* Header containing input functions commonly used for my purposes. */

#ifndef __INPUTFUNCTIONS_H_INCLUDED__
#define __INPUTFUNCTIONS_H_INCLUDED__

#include <stdio.h>
#include <string.h>

// Gets input using fgets and strips newline
// Stores the input in the given buffer
void simpleinput(char* buffer, int buf_size)
{
    fgets(buffer, buf_size, stdin);
    buffer[strcspn(buffer, "\r\n")] = 0;
}

#endif
