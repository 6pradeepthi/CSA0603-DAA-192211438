#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string:");
	scanf("%s",str);
	int len=strlen(str);
	printf("length of string:%d",len);
	return 0;
	
}
