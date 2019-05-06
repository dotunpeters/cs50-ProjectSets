#include <cs50.h>
#include <stdio.h>

typedef struct std
{
    char* surname;
    char* firstname;
    int age;
    int matric;
}
std;
int main(void)
{
    std *student = malloc(sizeof(struct std));
    FILE* ptr = fopen("student.csv", "a");
    int number = get_int("Number of Student: ");
    for (int i = 0; i < number; i++)
    {
        printf("student %i surname: ", i + 1);
        student->surname = get_string();
        printf("student %i firstname: ", i + 1);
        student->firstname = get_string();
        printf("student %i age: ", i + 1);
        student->age = get_int();
        printf("student %i matric number: ", i + 1);
        student->matric = get_int();
        fprintf (ptr, "\n%s, %s, %i, %i", student->surname, student->firstname, student->age, student->matric);
        printf ("student %i details: %s, %s, %i, %i (SAVED!)\n", i + 1, student->surname, student->firstname, student->age, student->matric);
    }
    fprintf (ptr, "\n");
    fclose(ptr);
}