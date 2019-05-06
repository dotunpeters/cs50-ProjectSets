 #include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Number of name character: %lu\n", strlen(name));

    int min_caps = 65;
    int max_caps = 90;
    int min_small = 97;
    int max_small = 122;
    for (int i=0; i<strlen(name); i++)
    {
        if (name[i] >= min_caps && name[i] <= max_caps)
        {
            printf("%c", name[i]);
        }
        else if (name[i] >= min_small && name[i] <= max_small)
        {
            printf("%c", name[i]-(min_small - min_caps));
        }
        else
        {
            printf("%c", name[i]);
        }
    }
     printf("\n");
}