#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    char* name;
    int age;
}
node;

int main(void)
{
    //open file for append
    FILE*ptr = fopen("student.csv", "a");
    //prompt for a positive
    int size;
    do
    {
        size = get_int("How many: ");
    }
    while(size<0);

    //declare array pointer
    node list[size];
    for(int i=0; i<size; i++)
    {
        list[i].name = get_string("student nme: ");
        list[i].age = get_int("student age: ");
        fprintf(ptr,"%s, %i\n", list[i].name, list[i].age);
    }
    int j;
    for(j=0; j<size; j++)
    {
        printf("%s, %i\n", list[j].name, list[j].age);
    }

    char ans;
    do
    {
    printf("more student? y/n:");
    ans = get_char();
    if(ans == 'y')
    {
        //node* more = list[size];
        list[size] = realloc(list[size], sizeof(int)* (size+1));
        for(int k=j; k <= size+1; k++)
        {
            list[k].name = get_string("student nme: ");
            list[k].age = get_int("student age: ");
            fprintf(ptr,"%s, %i\n", list[k].name, list[k].age);
        }
    }
    else
    {
        return 0;
    }
    }
    while(ans == 'y');


}