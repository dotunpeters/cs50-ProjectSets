//include all necessary header library
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(sizeof(char)*strlen(s)+1);
    for (int k = 0; k < strlen(s); k++){
        t[k] = s[k];
    }

    for(int i = 0; i <= strlen(t); i++)
    {
        t[i] = toupper(t[i]);
    }
    for(int j = 0; j < strlen(t); j++)
    {
        s[j] = toupper(s[j]);
    }

    if (strcmp(s, t) == 0)
    {
        printf("same\n");
        printf("s=%s\n", s);
        printf("t=%s\n", s);
    }else{
        printf("different\n");
    }
    free(t);
    return 0;
}