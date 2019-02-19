#include<stdio.h>
void main()
{
	printf("+.Add\n-.Sub\n*.Multi\n/.Div\nEnter the choice:");
	int a,b;
	char c;
	scanf("%c",&c);
	printf("Enter the two nos:");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case '+':	printf("\nThe sum is%d",a+b);	
			break;
		case '-':	printf("\nThe diff is %d",a-b);	
			break;
		case '*':	printf("\nThe product is%d",a*b);	
			break;
		case '/':	printf("\nThe result is %d",a/b);	
	}
}
