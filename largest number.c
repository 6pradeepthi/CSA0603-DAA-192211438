
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int largest=arr[0];
	for(i=0;i<n;i++)
	{
		if(largest<arr[i])
		{
			largest=arr[i];
		}
	}
	printf("Largest number:%d",largest);
	return 0;
}
