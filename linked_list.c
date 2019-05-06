#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int numb;
    struct node* next;
}
node;
int main(void)
{
    int number = get_int("number1: ");
    int number2 = get_int("number2: ");
    node* ptr = malloc(sizeof(int));
    //errror check
    if(ptr == NULL)
    {
        return 1;
        //break;
    }
    else
    {
        ptr -> numb = number;
        ptr->next = NULL;
        //return ptr;
    }
    //insert a new node
    ptr = insert(ptr, int number2);
    node* tmp = ptr;
    //print out list value
    for (tmp->numb = ptr->numb; tmp->next != NULL; tmp = tmp->next)
    {
        printf("%i, ", tmp->numb);
    }
    printf("\n");
    /*free memory
    for(int i = ptr->numb; ptr->next != NULL; ptr = ptr->next)
    {
        free(ptr);
    }*/
}