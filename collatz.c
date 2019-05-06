#include <cs50.h>
#include <stdio.h>

int collatz (int n);
int main (void)
{
    int n;
    do
    {
        n = get_int("Your number: ");
    }
    while (n <= 0);
    printf("it takes %i steps to get to 1 from %i\n", collatz (n), n);
}

int collatz (int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        int i;
        for (i = 0; n != 1; i++)
        {
            if ((n % 2) == 0)
            {
                n = n/2;
            }

            else if ((n % 2) != 0)
            {
                n = (3*n)+1;
            }
        }
        return i;
    }
}