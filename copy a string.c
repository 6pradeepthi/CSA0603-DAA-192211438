#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char rev[50];
	int i;
	printf("enter the string:");
	scanf("%s",&str);
	int len=strlen(str);
	rev[len]=0;
	for(i=0;i<=len;i++)
	{
		rev[i]=str[i];
	}
	printf("copy a string: %s",rev);
	return 0;
}
