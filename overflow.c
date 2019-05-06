// Integer overflow

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Iteratively double i
    for (int i = 1; i < 1073741823 ; i = i * 2)
    {
        printf("%i \t", i);
        sleep(1);
    }
}