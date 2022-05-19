#include<stdio.h>
int main()
{
    int num,n,i,a;
    scanf("%d %d",&num,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
           a=num*i;
           printf("%d x %d = %d
",num,i,a);
        }
    }
}