#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main (void)
{
    long long i = 2;
    while ( i > 0)
    {
        printf("%lli \n", i);
        sleep(1);
        i = i*i;
        time(main);

    }
}