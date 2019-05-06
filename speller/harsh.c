#include <cs50.h>
#include <stdio.h>
#include <string.h>

int harsh(char* dic);
int main(void)
{
    int i = 0;
    do
    {
        char* word = get_string("input: ");
        int x = harsh(word);
        printf("harsh code: %i\n", x);
        i++;
    }
    while(i<5);
}
int harsh(char* dic)
{
    int b=0;
    for(int a = 0; a<strlen(dic); a++)
    {
        b = b + dic[a];
    }
    int c = b%500;
    return c;
}