#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//get key from the command line
int main(int keyc, string keyv[2])
{
    //validate the command line argument is not more or less than 2 input
    while (keyc > 2 || keyc < 2)
    {
        return 1;
    }

    //convert the value of keyv to integer
    int keyi = atoi(keyv[1]);
    string text = get_string("Your Plain Text: ");
    int num = strlen(text);

    //iterate through each character of the plain text
    printf("ciphertext: ");
    for (int i = 0; i < num; i++)
    {
        //check if character is alphabeth
        if (isalpha(text[i]))
        {
            //check if character is in uppercase
            if (isupper(text[i]))
            {
                //convert to cipher if character is in uppercase
                int c = ((text[i] - 65) + keyi) % 26;
                printf("%c", c + 65);
            }
            else
            {
                //convert to cipher if character is in lowercase
                int c = ((text[i] - 97) + keyi) % 26;
                printf("%c", c + 97);
            }
        }
        else
        {
            //print character if not uppercase or lowercase
            printf("%c", text[i]);
        }
    }
    printf("\n");
}