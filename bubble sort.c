#include<stdio.h>
int main()
{
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,temp;
	printf("Before Bubble sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nBubble sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
