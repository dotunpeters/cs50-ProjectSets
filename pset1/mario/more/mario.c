#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for height value
    int height;
    do
    {
        height = get_int("Enter number of height: ");
    }
    while (height < 0 || height > 23);

    //full pyramid iteration
    for (int i = 0; i < height; i++)
    {

        // iterate over corresponding spaces
        for (int j = 2; j <= height - i; j++)
        {
            printf(" ");
        }

        //iterate left # in height's times
        for (int k = -1; k < i; k++)
        {
            printf("#");
        }
        printf("  ");

        //iterate right # in height's times
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("#\n");
    }
}