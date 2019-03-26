#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],r,c,d=0,ch;char x;
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of 1st array.");	
	do{for(int i=0;i<r;i++)
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
	printf("\n1.Diagonals sum\n2.Tranpose\n3.Addition\nEnter the option:");
	scanf("%d",&ch);
	if(ch==1)
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
	else if(ch==2)
	{	
		int t[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				t[i][j]=a[j][i];
			}
		}
		printf("The transpose is \n");
		for(int i=0;i<r;i++)
		{	
			printf("\n");			
			for(int j=0;j<c;j++)
			{ 
 				printf("%d\t",t[i][j]);

			}
		}

	}	
	else
	{
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
	}printf("Do you want to continue");scanf("%s",&x);}while(x=='y');
}
