#include<stdio.h>
struct stud
{
	int r,m[5];
	char n[20];	
}s[2];
void main()
{
	for(int i=0;i<2;i++)
	{	
		printf("Enter the name of %d student:",i+1);	
		scanf("%s",s[i].n);
		printf("Enter the roll no:");
		scanf("%d",&s[i].r);
		for(int j=0;j<5;j++)
		{
			printf("Enter mark %d",j+1);
			scanf("%d",&s[i].m[j]);
		}
	}
	FILE *f;
	f=fopen("2.txt","w");
	for(int i=0;i<2;i++)
	{
		fprintf(f,"%s",s[i].n);
		fprintf(f,"%d",s[i].r);
		for(int j=0;j<5;j++)
		{
			fprintf(f,"%d",s[i].m[j]);
		}
	}
	fclose(f);
}
