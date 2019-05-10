#include<stdio.h>
void main()
{
	FILE *f;
	char s[20];
	f=fopen("1.txt","w");
	gets(s);
	fprintf(f,"%s",s);	
	fclose(f);
}
