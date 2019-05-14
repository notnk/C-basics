#include<stdio.h>
void main()
{
	int ch;
	FILE *fp1,*fp2;
	fp1=fopen("s.txt","r");
	fp2=fopen("d.txt","w");
	while(ch!=EOF)
	{
		ch=getc(fp1);
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
