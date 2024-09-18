#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,rev=0,x;
	printf("enter the number:");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev+rem*rem*rem;
		n=n/10;
	}
	if(x==rev)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not a armstrong number");
	}
	return 0;
}
