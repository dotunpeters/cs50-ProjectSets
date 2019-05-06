#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int dolchange;
    int coin;
    do
    {
        change = get_float("Your change in dollars: ");
    }
    while (change < 0);

    dolchange = round(change * 100);
    //printf("%i\n", dolchange);

    for (coin = 0; dolchange > 0; coin++)
    {
        if (dolchange >= 25)
        {
            dolchange = dolchange - 25;
            //coin = coin + 1;
        }
        else if ((dolchange >= 10) && (dolchange < 25))
        {
            dolchange = dolchange - 10;
            //coin = coin + 1;
        }
        else if ((dolchange >= 5) && (dolchange < 10))
        {
            dolchange = dolchange - 5;
            //coin = coin + 1;
        }
        else if ((dolchange >= 1) && (dolchange < 5))
        {
            dolchange = dolchange - 1;
            //coin = coin + 1;
        }
        else
        {

        }
    }
    if(coin > 1)
    {
        printf("%i coins\n", coin);
    }
    else if (coin == 1)
    {
        printf("%i coin\n", coin);
    }
    else
    {
        printf("no coin\n");
    }
}