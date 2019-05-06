#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while(true)
    {
    string x = get_string("input: ");

    int n = 0;
    while (x[n] != '\0')
    {
        n++;
    }
    printf("lenght of input: %i\n", n);
    }
}