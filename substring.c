//0true 1flase
#include<stdio.h>
#include<string.h>
void main()
{
	int x;
	char s[100],ss[50];
	gets(s);
	gets(ss);
	x=strstr(s,ss);
	if(x)
		printf("sub string is found.");
	else
		printf("sub sting is not found.");
}
