#include <cs50.h>
#include <stdio.h>

int add_ints(void);
int main(void)
{
    printf ("%i \n", add_ints());
}

int add_ints(void)
{
    // read int from stdin
    int i = get_int("Enter an int: ");

    // make sure we read one successfully
    if (i == INT_MAX)
    {
        return INT_MAX;
    }

    int j = get_int("What do you want to add %d to? ", i);

    if (j == INT_MAX)
    {
        return INT_MAX;
    }

    return i + j;
}