//include the cs50.h header file where function "get_string" exist
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //get file name from user input
    //use a sample file i include called "student.csv"
    string file_copy = get_string("input file name to copy: ");
    string file_paste = get_string("input file name to paste: ");
    FILE*ptr_copy = fopen(file_copy, "r");
    FILE*ptr_paste = fopen(file_paste, "a");
    char ch = fgetc(ptr_copy);

    //iterate through each character of the file
    while (ch != EOF)
    {
        fputc(ch, ptr_paste);
        ch = fgetc(ptr_copy);
    }
}