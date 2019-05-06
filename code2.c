#include <cs50.h>
#include <string.h>
#include <stdio.h>

//int multiply( int *x);
int main(void)
{
    //char arr[5] = {'D', 'o', 't', 'u', 'n'};
    int age = get_int("Your age: ");
    float size = get_float("Your size: ");
    printf("Your age is: %i\n", age);
    printf("Your size is: %.2f\n", size);
    while(true)
    {
        int *new_age = &age;
        *new_age = get_int("Edit your age: ");
        printf ("Your new age is: %i \n", age);
        float* new_size = &size;
        *new_size = get_float("Edit your size: ");
        printf ("Your new size is: %.2f \n", size);
    }
    return 0;
    /* if (*b != 0)
     {
         printf ("new a is: %i \n", multiply(&a));
     }*/

}
/*
int multiply( int *x)
{
    *x *= 2;
    return *x;
}*/