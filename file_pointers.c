#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE*ptr = fopen("student.csv", "a");
    FILE*ptr3 = fopen("student.csv", "r");
    FILE*ptr2 = fopen("student2.csv", "w");
    char* me = get_string("Your name: ");
    int age = get_int("Age: ");
    fprintf (ptr, "%s, %i\n", me , age);
    //fprintf (ptr2, "%s, %i\n", me , age);
    char ch;
    while ((ch = fgetc(ptr3)) != EOF)
        fputc(ch, ptr2);
    fclose(ptr);
}