#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int* number = malloc(sizeof(int));
    for(int i=0; i < sizeof(int) + 1; i++)
    {
        number[i] = get_int("number: ");
        printf("%i\n", number[i]);
    }
    //printf("\n");
    for(int j=0; j < sizeof(int) + 1; j++)
    {
        printf("%i, ", number[j]);
    }
    printf("\n");
}