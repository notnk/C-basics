#include<stdio.h>
void check(char s[])
{
	int c=0,i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			c++;
		}
	i++;
	}
	printf("Total=%d",c);
}	
void main()
{
	char s[100];	
	gets(s);
	check(s);
}
	
