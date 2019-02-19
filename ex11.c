#include<stdio.h>
void main()
{
	int x,z,r,b;
	printf("Enter the no:");
	scanf("%d",&x);
	z=0;
	b=x;
	while(x>0)
	{
		r=x%10;
		z+=r*r*r;
		x/=10;
	}
	if(z==b)
	{	
		printf("The no is armstrong.");
	}
	else
	{
		printf("The no is not ");
	}
}
