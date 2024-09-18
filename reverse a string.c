#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string:");
	scanf("%s",str);
	int length=strlen(str);
	int i;
	printf("Reversed String:");
	for(i=length-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
