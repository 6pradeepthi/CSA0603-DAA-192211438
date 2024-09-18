#include<stdio.h>
int main()
{
	int a[3][3]={{1,1},{1,1},{1,1}};
	int b[3][3]={{1,1},{1,1},{1,1}};
	int c[3][3]={{0,0},{0,0},{0,0}};
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[j][k];
			}
		}
	}
	printf("Matrix multiplication:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
