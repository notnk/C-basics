#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the 3 nos:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%dis the greatest",a);
	}
	else if(b>a && b>c)
	{
		printf("%dis the greatest",b);
	}
	else
	{
		printf("%dis the greatest",c);
	}
	if(a<b &&a<c)
		printf("%dis the smallest",a);
	else if(b<a &&b<c)
		printf("%dis the smallest",b);
	else
		printf("%dis the smallest",c);
}
