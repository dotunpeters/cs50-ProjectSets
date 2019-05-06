/**
 * bubble-sort0.c - Bubble sort
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Implement bubble sort!
 */
#include <stdio.h>
#include <cs50.h>
#include "helpers.h"

#define NUM_TESTS 4

void bubble_sort(int arr[], int size);
int swap(int*a, int*b);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    //print_array(nums0, sz0);
    bubble_sort(nums0, sz0);
    //print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    //print_array(nums1, sz1);
    bubble_sort(nums1, sz1);
    //print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    //print_array(nums2, sz2);
    bubble_sort(nums2, sz2);
    //print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    //print_array(nums3, sz3);
    bubble_sort(nums3, sz3);
    //print_array(nums3, sz3);
}

// implementation of bubble sort that sorts a given array
void bubble_sort(int list[], int numb)
{
    //number of integers to sort
    numb = get_int("how many input: ");

    //inserting each integer into the array list
    //list[numb];
    for (int i = 0; i < numb; i++)
    {
        printf("value %i: ", i + 1);
        list[i] = get_int();
        //printf("\t");
    }

    //sort array list
    int m = 0;
    while (m < numb)
    {
        int j;
        for ( j = 0; j < numb-1; j++)
        {
            if (j > numb)
            {
                break;
            }
            else if (list[j] > list[j+1])
            {
                if (j+1 <= numb)
                {
                    swap(&list[j], &list[j+1]);
                }
            }
        }
        j--;
        m++;
    }

    //print out sorted array list
    printf("Sort:");
    for (int k = 0; k < numb; k++)
    {
        printf("%i, ", list[k]);
    }
    printf("\n");
}

int swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}