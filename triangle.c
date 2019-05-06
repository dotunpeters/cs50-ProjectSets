#include <stdio.h>
#include <cs50.h>

bool check_val(int x, int y, int z);
bool check_val_again(int x, int y, int z);

int main (void)
{
    int x = get_int("Side 1: ");
    int y = get_int("Side 2: ");
    int z = get_int("Side 3: ");

    bool test1 = check_val(x, y, z);
    if(test1 == true)
    {
        bool test2 = check_val_again(x, y, x);
        if (test2 == true)
        {
            printf("%i, %i and %i will make a triangle.", x, y, z);
        }
        else
        {
            printf("Will not make a perfect triangle!");
        }
    }
    else
    {
        printf("Will not make a perfect triangle!");
    }
}

bool check_val(int x, int y, int z)
{
    if((x > 0) && (y > 0) && (z > 0))
    {
        return true;
    }
}

bool check_val_again(int x, int y, int z)
{
    return true;
}