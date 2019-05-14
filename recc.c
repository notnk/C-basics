#include<stdio.h>
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
void main()
{
	int a,c;
	scanf("%d",&a);
	c=sum(a);
	printf("%d",c);
}
