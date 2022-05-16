#include<stdio.h>
int main()
{
    int n,product=1,sum=0,result,r;
    scanf("%d",&n);
    while(n)
    {
     r=n%10;
     sum= sum+r;
     product=product*r;
     n=n/10;
    }
    int a=product-sum;
    printf("%d",a);
}