//include cs50 header tag
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;

    //get pyramid level from user
    x = get_int("Pyramid Level number: ");

    //iterate the pyramid
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("* \n");
    }
}