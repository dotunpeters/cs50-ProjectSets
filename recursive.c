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
        if ((n % 2) == 0)
        {
            return 1 + collatz (n/2);
        }
        else if ((n % 2) != 0)
        {
            return 1 + collatz ((3*n)+1);
        }
    }
    return 0;
}