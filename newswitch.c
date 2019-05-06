#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //propt user for input
    char c = get_char("answer: ");

    switch(c)
    {
        case 'y':
        case 'Y':
           printf("Yes\n");
           break;
        case 'n':
        case 'N':
        printf("No\n");
        break;
    }
}