#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
int i,a,k,p,e;
string n;
k=0;
n = get_string();
    for (i=0;i<strlen(n);i++){
    if (i%2!=0){
    k=k+atoi(n[i])*2;

    if(atoi(n[i])*>=10){
    k=k-9;
    }
    if(i%2==0){
       p=p+atoi(n[i]);
    }
    e = p+k;
    if (e%10==0){
       printf("AMEX");
       }
    else{
       printf("Invalid");
       }
    }
}
return 0;
    }