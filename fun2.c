#include<stdio.h>
int check(int a)
{
	if(a%2==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
void main()
{
	int a[100],n,x,e=0,o=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of tha array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		x=check(a[i]);
		if(x==0)
		{
			printf("The element is even(%d)\n",a[i]);
			e++;		
		}
		else
		{
			printf("The element is not even(%d)\n",a[i]);
			o++;
		}
	}
	printf("Even nos=%d\nOdd nos=%d",e,o);
}
