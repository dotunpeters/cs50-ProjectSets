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
            printf("%c", name[i]);
        }
        else if (name[i]>=97 && name[i]<=122)
        {
            printf("%c", name[i]-32);
        }
        else
        {
            printf("%c", name[i]);
        }
    }
     printf("\n");
}