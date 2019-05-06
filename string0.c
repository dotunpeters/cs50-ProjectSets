#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Number of name character: %lu\n", strlen(name));
    for (int i=0; i<strlen(name); i++)
    {
        if (name[i]>=65 && name[i]<=90)
        {
            printf("%c %i : %c %i", name[i], name[i], name[i]+32, name[i]+32);
            printf("\n");
        }
        else if (name[i]>=97 && name[i]<=122)
        {
            printf("%c %i : %c %i", name[i]-32, name[i]-32, name[i], name[i]);
            printf("\n");
        }
        else
        {
            printf("%c %i", name[i], name[i]);
            printf("\n");
        }
    }
     printf("\n");
}