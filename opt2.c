#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//return the value of any square
int square(int y, int z);
int main(int argc, string argv[])
{
    int q = argc;
    for (argc = q; (argc > 3) || (argc = 1); argc *= 1)
    {
        printf("Less than 4 inputs required\n");
    }
        printf("Hello, %s %s \n", argv[1], argv[2]);
    //return the value of any square
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = square(a,b);
    printf("%i \n", c);
}
int square(int y, int z)
//return the value of any square
{
    return y * z;
}