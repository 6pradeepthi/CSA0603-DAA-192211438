#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char rev[50];
	printf("Enter the string:");
	scanf("%s",&str);
	int len=strlen(str);
	rev[len]=0;
	int i;
	for(i=len-1;i>=0;i--)
	{
		rev[len-i-1]=str[i];
	}
	if(strcmp(str,rev)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
	return 0;
}
