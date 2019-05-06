#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE*ptr = fopen("student.csv", "r");
    FILE*ptr1 = fopen("student.csv", "w");
    //FILE*ptr2 = fopen("student2.csv", "a");
    while ((char ch = fgetc(ptr)) != EOF)
    {
        fprintf("%c", ch);
    }
    fclose(ptr);
}