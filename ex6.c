#include<stdio.h>
void main()
{
	printf("1.Add\n2.Sub\n3.Multi\n4.Div");
	int a,b,c;
	scanf("%d",&c);
	printf("Enter the two nos:");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case 1:	printf("%d",a+b);	
			break;
		case 2:	printf("%d",a-b);	
			break;
		case 3:	printf("%d",a*b);	
			break;
		case 4:	printf("%d",a/b);	
	}
}
