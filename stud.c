#include<stdio.h>
struct stud
{
	char name[100];
	int m[5];
  	float avg[100];
}s[100];
void main()
{	
	int t[100],n;
	printf("Enter the total no of students:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		t[i]=0;
		printf("Enter the name of the %dth student:",i+1);
		scanf("%s",s[i].name);
		printf("Enter the 5 marks of the %dth student:",i+1);
		for(int j=0;j<5;j++)
		{
			scanf("%d",&s[i].m[j]);
			t[i]+=s[i].m[j];
		}
	}
	for(int i=0;i<n;i++)
	{
		s[i].avg[i]=t[i]/5;
		printf("%s\t%d\t%d\t%d\t%d\t%d\t%f\n",s[i].name,s[i].m[0],s[i].m[1],s[i].m[2],s[i].m[3],s[i].m[4],s[i].avg[i]);
	}
}
