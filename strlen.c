#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = get_string("Your name: ");
    int i;
    int j;
    char initials[strlen(name)];
    for (i = 0, j = 0; name[i] != '\0'; i++)
    {
        if(isupper(name[i]))
        {
        //printf ("%c ", name[i]);
        initials[j] = name[i];
        j++;
        }
    }
    //printf("\n");
    printf("Your name has %i character \n", i);
    printf("initials: %c.%c.%c...%c \n", initials[0], initials[1], initials[2], initials[10]);
    //printf("%s \n", initials);
}