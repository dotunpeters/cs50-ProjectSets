#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//get key from the command line
int main(int keyc, string keyv[2])
{

    //validate the command line argument is not more or less than 2 input and is
    while (keyc > 2 || keyc < 2)
    {
        return 1;
    }

    //iterate over each keyv character for alphabeth validation
    string keys = keyv[1];
    int keylen = strlen(keys);
    int keyi[keylen];
    for (int j = 0; j < keylen; j++)
    {
        if (isalpha(keys[j]))
        {
            if(isupper(keys[j]))
            {
                keyi[j] = keys[j] - 65;
            }
            else
            {
                keyi[j] = keys[j] - 97;
            }
        }
        else
        {
            return 1;
        }
    }

    string text = get_string("Your Plain Text: ");
    int num = strlen(text);

    //iterate through each character of the plain text
    printf("ciphertext: ");
    int i = 0;
    int j;
   //  for (i = 0, j = 0; i < num; i++, j++)
    //{
        //check if character is alphabeth
        if ((text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122))
        {
            for (i = 0, j = 0; i < num; i++, j++)
    {
            //check if character is in uppercase
            if (text[i]>=65 && text[i]<=90)
            {
                //convert to cipher if character is in uppercase
                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;
                printf("%c", c + 65);
            }
            else if (text[i]>=97 && text[i]<=122)
            {
                //convert to cipher if character is in lowercase
                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;
                printf("%c", c + 97);
            }
        }
        }
        else if (text[i] == 32)
        {
            //print character if not uppercase or lowercase
            printf(" ");
        }
        else
        {
            //print character if not uppercase or lowercase
            printf("%c", text[i]);
        }
         if (text[i] == 32)
        {
            //print character if not uppercase or lowercase
            printf(" ");
        }else{}
    printf("\n");
}