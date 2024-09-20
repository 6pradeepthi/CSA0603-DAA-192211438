#include<stdio.h>
int main()
{
	int n,sum=0,rev;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=n%10;
		sum=sum+rev;
		n=n/10;
	}
	printf("Sum of digits:%d",sum);
	return 0;	
}
