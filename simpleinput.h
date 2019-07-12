/* Simple string input function using fgets that strips newline */

#ifndef __SIMPLEINPUT_H_INCLUDED__
#define __SIMPLEINPUT_H_INCLUDED__

#include <stdio.h>
#include <string.h>

// Gets input using fgets and strips newline
// Stores the input in the given buffer
void input(char* buffer, int buf_size)
{
    fgets(buffer, buf_size, stdin);
    buffer[strcspn(buffer, "\r\n")] = 0;
}

#endif
