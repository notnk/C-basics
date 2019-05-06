#include<stdio.h>
struct date
{
	int d,m,y;
}t;
int check(int d,int m,int y)
{
	if(m>12)	
		return -1;
	if(y<1000 && y>10000)
		return -1;
	if(d>31)
		return -1;
	if(m==2)
		if(y%400==0 && m<30)
			return 0;
		else 
			return -1;
	if( y%400==0)
		if(m==2 && d>29)
			return -1;
	else
	{
		if(d==31)
		{
			if(m==2 || m==4 || m==7 || m==8 || m== 10 )
			{
				return -1;
			}
		}	
	}
	return 0;
}
void main()
{
	scanf("%d%d%d",&t.d,&t.m,&t.y);
	int x=check(t.d,t.m,t.y);
	if(x==0)
	{
		printf("the date is valid");
	}
	else
		printf("The date is not valid");
}
