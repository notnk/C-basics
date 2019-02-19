//check for prime
#include<stdio.h>
void main()
{
	int a,i=2,flag=0;
	printf("Enter the no:");
	scanf("%d",&a);
	while(i<a)
	{
		if(a%i==0)
		{
			flag=1;		
			break;
		}
		i++;
	}
	if(flag==0)
		printf("The no is prime.");
	else
		printf("The no is not prime");
}
