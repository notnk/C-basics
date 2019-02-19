#include<stdio.h>
void main()
{
	int x,z,r,y;
	printf("Enter the no:");
	scanf("%d",&x);
	z=x;
	while(x>0)
	{
		r=x%10;
		y=r+y*10;
		x/=10;
	}
	if(y==z)
	{	
		printf("The no is paladrome.");
	}
	else
	{
		printf("The no is not ");
	}
}
