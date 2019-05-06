#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int frequency(string notes);
int main(void)
{
    string notes = get_string("notes: ");
    int freq = frequency(notes);
    printf ("frequency is %i\n", freq);
}

int frequency(string notes)
{
    int freq = 440;
    if (strlen(notes) == 6)
    {
        int octave = atoi(&notes[1]);
        if (octave > 4)
        {
            for (int i = 4; i < octave; i++)
            {
                freq *= 2;
            }
        }
        else if ( octave < 4)
        {
            for (int i = 4; i > octave; i--)
            {
                freq /= 2;
            }
        }
        else if (octave == 4)
        {
            freq = 440;
        }

        if (notes[0] == 'A')
        {
            return round(freq);
        }
        else if (notes[0] == 'B')
        {
            freq *= (pow(2.0, (2.0 / 12.0)));
            return round(freq);
        }
        else if (notes[0] == 'C')
        {
            freq *= (pow(2.0, (3.0 / 12.0)));
            return round(freq);
        }
        else if (notes[0] == 'D')
        {
            freq *= (pow(2.0, (5.0 / 12.0)));
            return round(freq);
        }
        else if (notes[0] == 'E')
        {
            freq *= (pow(2.0, (7.0 / 12.0)));
            return round(freq);
        }
        else if (notes[0] == 'F')
        {
            freq *= (pow(2.0, (8.0 / 12.0)));
            return round(freq);
        }
        else if (notes[0] == 'G')
        {
            freq *= (pow(2.0, (10.0 / 12.0)));
            return round(freq);
        }

    }
    else if (strlen(notes) == 7)
    {
        int octave = atoi(&notes[2]);
        if (octave > 4)
        {
            for (int i = 4; i < octave; i++)
            {
                freq *= 2;
            }
        }
        else if ( octave < 4)
        {
            for (int i = 4; i > octave; i--)
            {
                freq /= 2;
            }
        }
        else if (octave == 4)
        {
            freq = 440;
        }

        if (((notes[0] == 'A') && (notes[1] == '#')) || ((notes[0] == 'B') && (notes[1] == 'b')))
        {

            freq *= (pow(2.0, (1.0 / 12.0)));
            return round(freq);
        }
        else if (((notes[0] == 'C') && (notes[1] == '#')) || ((notes[0] == 'D') && (notes[1] == 'b')))
        {
            freq *= (pow(2.0, (4.0 / 12.0)));
            return round(freq);
        }
        else if (((notes[0] == 'D') && (notes[1] == '#')) || ((notes[0] == 'E') && (notes[1] == 'b')))
        {
            freq *= (pow(2.0, (6.0 / 12.0)));
            return round(freq);
        }
        else if (((notes[0] == 'F') && (notes[1] == '#')) || ((notes[0] == 'G') && (notes[1] == 'b')))
        {
            freq *= (pow(2.0, (9.0 / 12.0)));
            return round(freq);
        }
        else if (((notes[0] == 'D') && (notes[1] == '#')) || ((notes[0] == 'A') && (notes[1] == 'b') && (notes[2] == octave + 1)))
        {
            freq *= (pow(2.0, (7.0 / 12.0)));
            return round(freq);
        }
    }

    return 0;
}