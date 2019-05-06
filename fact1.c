#include <cs50.h>
#include <stdio.h>

long long fact (int n);
int main (void)
{
    int number = get_int("Your number: ");
    printf("%i!= %lli\n", number, fact(number));
}

long long fact (int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        long long i = 1;
        do
        {
            i = n * i;
            n--;
        }
        while (n > 1);
        return i;
    }
}