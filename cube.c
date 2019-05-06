//include cs50 header tag
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // variable declaration
    int x;
    int i;

    // prompt user for box level
    x = get_int("Level of box: ");

    // iterate the box
    for (int n = 0; n < x; n++)
    {
    for (i = 0; i < (x*2); i++)
    {
        printf("#");
    }
    printf("#\n");
    }
}