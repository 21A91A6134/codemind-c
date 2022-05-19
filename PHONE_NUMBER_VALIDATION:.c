#include<stdio.h>
int main ()
{
    long long int n,c=0;
    scanf("%lld",&n);
    while(n)
    {
        c++;
        n=n/10;
    }
    
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
}