#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],r,c;
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of 1st array.");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of 2nd array.");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int d[r][c];
	printf("The sum of a+b is \n");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		printf("\n");
		for(int j=0;j<c;j++)
		{
			printf("%d  ",d[i][j]);
		}
	}
}
