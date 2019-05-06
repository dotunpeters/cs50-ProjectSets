// include header elements
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declare and initialize value of array
    int n = 0;
    int x[] = {1,2,3,4,5};
    for (n = 0; n < 5; n++)
    {
        printf("%i \t", x[n]);
    }
}