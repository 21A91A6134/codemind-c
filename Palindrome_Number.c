#include<stdio.h>
int reverse(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	return(sum);
}

int main()
{
	int arr[100],n,i,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	for(i=0;i<n;i++)
	{
		p=reverse(arr[i]);
		if(p==arr[i])
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
		printf("
");
		p=0;
	}
}