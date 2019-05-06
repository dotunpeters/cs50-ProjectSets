#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char alpha[27];
    for (int i = 64; i < 91; i++)
    {
        for (int k = 0; k < 27; k++)
        {
        alpha[i] = i;
        printf("%c ", alpha[i]);
        }
    }
    printf("\n");
}