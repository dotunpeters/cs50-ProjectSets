#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int py = 10;
    printf("old py is: %i\n", py);
    int*px = malloc(sizeof(int) * 1);
    //printf("new py is: %i\n", px);
    px = &py;
    *px = 50;
    printf("new py is: %i\n", py);
}