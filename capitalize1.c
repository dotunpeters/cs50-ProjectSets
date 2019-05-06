#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Number of name character: %lu\n", strlen(name));
    for (int i=0; i<strlen(name); i++)
    {
        if(name[i] == islower(name[i]))
        {
        printf("%c", toupper(name[i]));
        } else {
            printf("%c", name[i]);
        }
    }
     printf("\n");
}