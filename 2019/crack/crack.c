// Extract the salt from the hash
// Generate the trial to be hashed
// Pass the hash and trial to crypt.

#define _XOPEN_SOURCE
#include <unistd.h>
#define _GNU_SOURCE
#include <crypt.h>

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }

    string hash = argv[1];

    char salt[] = {hash[0], hash[1], '\0'};

    char alpha[] = "abcedfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";

    bool not_found = true;
    string answer;
    char len_one[6];
    string guess = "\0";
    int i = 0;
    len_one[1] = '\0';
    do
    {
        len_one[0] = alpha[i];
        guess = crypt(len_one, salt);
        if (strcmp(guess, hash) == 0)
        {
            not_found = false;
            answer = len_one;
        }
        else
        {
            int j = 0;
            len_one[2] = '\0';
            do
            {
                len_one[1] = alpha[j];
                guess = crypt(len_one, salt);
                if (strcmp(guess, hash) == 0)
                {
                    not_found = false;
                    answer = len_one;
                }
                else
                {
                    int k = 0;
                    len_one[3] = '\0';
                    do
                    {
                        len_one[2] = alpha[k];
                        guess = crypt(len_one, salt);
                        if (strcmp(guess, hash) == 0)
                        {
                            not_found = false;
                            answer = len_one;
                        }
                        else
                        {
                            int l = 0;
                            len_one[4] = '\0';
                            do
                            {
                                len_one[3] = alpha[l];
                                guess = crypt(len_one, salt);
                                if (strcmp(guess, hash) == 0)
                                {
                                    not_found = false;
                                    answer = len_one;
                                }
                                else
                                {
                                    int m = 0;
                                    do
                                    {
                                        len_one[4] = alpha[m];
                                        len_one[5] = '\0';
                                        guess = crypt(len_one, salt);
                                        if (strcmp(guess, hash) == 0)
                                        {
                                            not_found = false;
                                            answer = len_one;
                                        }
                                        m++;
                                    }
                                    while (not_found && m < 52);
                                    len_one[4] = '\0';
                                }
                                l++;
                            }
                            while (not_found && l < 52);
                            len_one[3] = '\0';
                        }
                        k++;
                    }
                    while (not_found && k < 52);
                    len_one[2] = '\0';
                }
                j++;
            }
            while (not_found && j < 52);
            len_one[1] = '\0';
        }
        i++;
    }
    while (not_found && i < 52);
    if (not_found == false)
    {
        printf("Answer is %s", answer);
    }
}