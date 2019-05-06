#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long chksum;
    float x = 334323.56765;
    //float truncf(float x);
    printf("%.0f \n", truncf(x));
    do
    {
        chksum = get_long_long("creditcard number: ");
    } while (chksum < 0);
    if (chksum<10)
    {
        int sum1 = chksum % 10;
        printf("sum1 is: %i\n", sum1);
    }
    else if (chksum>10)
    {
        int sum2 = chksum % 10;
        int sum3 = chksum / 10;
        printf("sum2 is: %i\t", sum2);
        printf("sum3 is: %i\t", sum3);

    }
}