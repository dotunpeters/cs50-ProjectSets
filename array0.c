#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int aryc, string aryv[4])
{
    if (aryc <= 4)
    {
    printf("Hello, %s %s %s\n", aryv[1], aryv[2], aryv[3]);
    } else{
        printf("Hello, World\n");
    }
}