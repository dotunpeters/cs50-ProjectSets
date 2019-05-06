#include <cs50.h>
#include <stdio.h>

int swap(int *a, int *b);
int main(void)
{
    int x = get_int("x is: ");
    int y = get_int("y is: ");
    swap (&x, &y);
    printf("now x is:%i \nand y is: %i \n", x, y);
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return *a;
    return *b;
}