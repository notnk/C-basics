#include<stdio.h>
void main()
{
	int a[100][100],d=0,r,c,rs=0,cs=0,ch,x;
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of array.");	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<r;i++)
	{
		printf("\n");	
		for(int j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n1.Row sum\n2.Column sum\n3.Diagonals sum\nEnter the option:");
	scanf("%d",&ch);
	if(ch==3)
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(i==j)
				{
					d+=a[i][j];
				}
			}
		}
		printf("\nThe diagonals sum is %d",d);		
	}
	else if(ch==1)
	{
		printf("Enter the row.");
		scanf("%d",&x);
		for(int i=0;i<c;i++)
		{
			rs+=a[x-1][i];
		}
		printf("The required sum is %d",rs);
	}
	else
	{
		printf("Enter the column.");
		scanf("%d",&x);
		for(int i=0;i<r;i++)
		{
			cs+=a[i][x-1];
		}
		printf("The required sum is %d",cs);
	}
}
