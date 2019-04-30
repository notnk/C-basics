#include<stdio.h>
int even(int a)
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
	int a[100],n,x;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of tha array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=even(a[1]);
	if(x==0)
	{
		printf("The element is even");
	}
	else
	{
		printf("The element is not even");
	}
}
