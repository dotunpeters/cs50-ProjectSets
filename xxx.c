// Helper functions for music

#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int b = atoi(&fraction[0]);
    int c = atoi(&fraction[2]);

    if (b == 1 && c == 8)
    {
        return 1;
    }
    else if ((b == 2 && c == 8) || (b == 1 && c == 4))
    {
        return 2;
    }
    else if (b == 3 && c == 8)
    {
        return 3;
    }
    else if ((b == 4 && c == 8) || (b == 2 && c == 4) || (b == 1 && c == 2))
    {
        return 4;
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string notes)
{
    if (strlen(notes) == 6)
    {
        int octave = notes[1];
        if (octave >= 4)
        {
            for (int i = 4; i == octave; i++)
            {
                freq *= 2
            }
        }
        else if ( octave < 4)
        {
            for (int i = 4; i == octave; i--)
            {
                freq /= 2
            }
        }


    }
    else if (strlen(notes) == 7)
    {

    }
    else
    {

    }
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s[0] == '\0')
    {
        return true;
    }
    return false;
}
