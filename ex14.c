//Biggest and smallest in an array
#include<stdio.h>
#define size 1000
void main()
{
	int a[size],n,temp,test;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the %dth element",i+1);
		scanf("%d",&a[i]);
	}
	int small,big;
	small=a[0];	
	for (int i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}	
	big=a[0];	
	for(int i=1;i<n;++i)
	{	
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("%d is the smallest and %d is the largest in the array.",small,big);
}
