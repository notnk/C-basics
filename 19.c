// Program to search an element from an array of n numbers using pointers.
#include<stdio.h>
void main()
{	
	int a[100],n,x;
	printf("Enter the total no of elements");
	scanf("%d",&n);
	printf("Enter the elements.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p,flag=0;
	printf("Enter the name to be searched:");
	scanf("%d",&x);
	p=&a[0];
	for(int i=0;i<n;i++)
	{
		if(*p==x)
		{
			printf("Element found in postion %d",i+1);
			break;
			flag=1;
		}
		p++;
	}
	if(flag==0)
	{
		printf("The element is not found.");
	}
}


