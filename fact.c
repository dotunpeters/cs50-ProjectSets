#include <cs50.h>
#include <stdio.h>

long long fact (long long n);
int main (void)
{
    long long number = get_long_long("Your number: ");
    printf("%lli!= %lli\n", number, fact(number));
}

long long fact (long long n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
    return n * fact(n - 1);
    }
}