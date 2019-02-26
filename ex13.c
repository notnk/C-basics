//prime nos in a range
#include<stdio.h>
void main()
{
	int n1,n2,flag=0;
	printf("Enter the lower and the upper range:");
	scanf("%d%d",&n1,&n2);
	for(int i=n1;i<n2+1;++i)
	{
		for(int j=2;j<i;++j)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d is a prime\n",i);
		}
		flag=0;
	}
}
