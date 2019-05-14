#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;	
	a=b;
	b=t;
	printf("After swaping x=%d \t y=%d",a,b);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
}
