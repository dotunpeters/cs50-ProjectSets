#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numb = get_int("number: ");
    printf("old number is: %i\n", numb);
    int*edit_numb = malloc(sizeof(int) * 1);
    //edit_numb = NULL;
    eprintf("edit_numb\\ value: %i\n", *edit_numb);
    edit_numb = &numb;
    for (int i=0; i<3; i++)
    {
        *edit_numb = get_int("edit number: ");
        printf("new number is: %i\n", numb);
    }
    //free(edit_numb);
}