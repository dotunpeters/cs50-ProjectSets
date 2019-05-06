#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long cc_number;
    long cc_chksum[16];
  do
  {
      cc_number = get_long_long("credit-card number: ");
  }
  while((cc_number<1000000000000) || (cc_number>9999999999999999));

  for (int i=0;cc_number!=0; i++)
    {
        cc_chksum[i] = cc_number % 10;
        cc_number = cc_number / 10;
        if(cc_chksum[i]*2 > 9)
        {
            printf("%li : %li %li : %li\n", cc_chksum[i], cc_chksum[i]*2 / 10, cc_chksum[i]*2 % 10, (cc_chksum[i]*2 / 10) + (cc_chksum[i]*2 % 10) );
        } else{
            printf("%li : %li\n", cc_chksum[i], cc_chksum[i]*2);
        }
    }
}