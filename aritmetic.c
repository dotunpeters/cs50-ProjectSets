#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //promp user for input
    float x = get_float("x: ");

    //prompt user for another input
    float y = get_float("y: ");



    if (x > y)
    {
        printf("%.1f is greater than %.1f\n", x, y);
    }
    else if (x < y)
    {
        printf("%.1f is less than %.1f \n", x, y);
    }
    else
    {
        printf("%.1f equals %.1f", x, y);
    }
}