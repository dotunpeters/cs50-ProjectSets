#include <cs50.h>
#include <stdio.h>
//return the value of any square
int square(int n);
int main(void)
{
    //return the value of any square
    int y = get_int("y: ");
    y = square(y);
    printf("%i \n", y);
}
int square(int y)
//return the value of any square
{
    return y * y;
}