#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float f = get_float("Your height: \n");
    printf ("Hello, .2%f \n", f);
}