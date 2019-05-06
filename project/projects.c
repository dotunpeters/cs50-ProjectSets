#include <stdio.h>
#include <string.h>
#include <cs50.h>


int quit(string name);
void insert(string name);
void search(string name);
void sort(string name);
void delet(string name);
void command(string name);

int main(void)
{
    printf("Hi, what is your name?: ");
    string name = get_string();
    printf("Welcome, %s\n", name);
    command(name);
}

void command(string name)
{
    int val;
    printf("Here are list of command: \n");
    printf("Press 0 to quit\n");
    printf("Press 1 to insert integer value\n");
    printf("Press 2 to search a value\n");
    printf("Press 3 to sort the values in assending order\n");
    printf("Press 4 to delete all values\n");
    scanf("%i", &val);
    if (val == 0)
    {
        printf("Hey %s, you have chosen to quit this program. bye\n", name);
        quit(name);
    }
    else if (val == 1)
    {
        printf("Hey %s, you have chosen to insert values into your list\n", name);
        insert(name);
    }
    else if(val == 2)
    {
        printf("Hey %s, you have chosen to search through your list\n", name);
        search(name);
    }
    else if(val == 3)
    {
        printf("Hey %s, you want to sort your list\n", name);
        sort(name);
    }
    else if(val == 4)
    {
        printf("Hey %s, are you sure you want to delete all values in your list?: ", name);
        char valdel = 'y';
        char yes = 'y';
        char no = 'n';
        valdel = get_char();
        printf("your input is: %c\n\n", valdel);
        if (valdel == yes)
        {
            delet(name);
        }
        else if (valdel == no)
        {
            printf("restrain delete\n   ");
            command(name);
        }
        else
        {
            printf("incorect input. Try again later");
            command(name);
        }
    }
    else
    {
        printf("incorect input. Try again later\n");
        command(name);
    }
}

void insert(string name)
{
    command(name);
}

void search(string name)
{
    command(name);
}

void sort(string name)
{
    command(name);
}

void delet(string name)
{
    command(name);
}

int quit(string name)
{
    return 0;
}