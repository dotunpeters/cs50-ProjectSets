// Implements a dictionary's functionality

#include <stdbool.h>
#include <string.h>

#include "dictionary.h"

typedef struct node
{
    char* word;
    struct node* next;
}
node;

node* list = NULL;
node harsh_table[500];


// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(void)
{
    // TODO
    node* new = malloc(sizeof(node));
    string word = malloc(sizeof(string));
    FILE*ptr = fopen("large", "r");
    while (fscanf (ptr, "%s", word) != EOF)
    {
        new->word = word;
        //strcpy(new->word, word);
        printf("%s\n", new->word);
        int x = harsh(new->word);

        harsh_table[x] = new;

        if(list == NULL)
        {
            list = new;
            new->next = NULL;
        }
        else
        {
            new->next = list;
            list = new;
        }
    }
    fclose(ptr);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}

//harsh function
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
