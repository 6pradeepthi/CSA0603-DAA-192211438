#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("enter the two values:");
	scanf("%d %d",&n1,&n2);
	int a=n1,b=n2;
	while(n2!=0)
	{
		temp=n1%n2;
		n1=n2;
		n2=temp;
	}
	printf("GCD of %d and %d is %d",a,b,n1);
	return 0;
}
