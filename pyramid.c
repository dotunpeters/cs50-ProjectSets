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

    //half pyramid iteration
    for (int i = 0; i <= height; i++)
    {

        // iterate over corresponding spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        //iterate # in heights' times
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}