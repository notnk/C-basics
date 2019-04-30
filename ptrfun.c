#include<stdio.h>
void check(int *a,int n)
{
	int e=0,o=0;
	for(int i=0;i<n;i++)	
	{
		if(*a%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		a++;	
	}
	printf("Even nos=%d\nOdd nos=%d",e,o);
}
void main()
{
	int a[100],n,x;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of tha array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	check(a,n);
}
