#include<stdio.h>
struct stud
{
	char name[100];
	int m[4],r;
}s[100];
void main()
{	
	int n,t[100],ch,top,x;
	printf("Enter the total no of students:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		t[i]=0;
		printf("Enter the name of the %dth student:",i+1);
		scanf("%s",s[i].name);	
		printf("Enter the 4 marks of the student:");
		for(int j=0;j<4;j++)
		{
			scanf("%d",&s[i].m[i]);
			t[i]+=s[i].m[j];
		}		
		printf("Enter the roll no:");
		scanf("%d",&s[i].r);
	}
	printf("1.Insert details.\n2.Failed studs.\n3.Toppers.\nEnter the choice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		for(int i=0;i<n;i++)
		{	
			t[i]=0;
			printf("Enter the name of the %dth student:",i+1);
			scanf("%s",s[i].name);	
			printf("Enter the 4 marks of the student:");
			for(int j=0;j<4;j++)
			{
				scanf("%d",&s[i].m[i]);
				t[i]+=s[i].m[j];
			}		
			printf("Enter the roll no:");
			scanf("%d",&s[i].r);
		}	
	}
	else if(ch==2)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i].m[0]<25&&s[i].m[1]<25&&s[i].m[2]<25 || s[i].m[1]<25&&s[i].m[2]<25&&s[i].m[3]<25 || s[i].m[0]<25&&s[i].m[2]<25&&s[i].m[3]<25)
			{
				puts(s[i].name);
				printf("\n");
			}
		}
	}
	else
	{
		int c=0,sm;		
		top=t[0];
		for(int i=0;i<n;i++)
		{
			if(top<t[i])
			{
				top=t[i];
				x=i;
			}
		}
		printf("THe class topper is %s\n",s[x].name);
		for(int i=0;i<4;i++)
		{
			sm=s[0].m[i];			
			for(int j=0;j<n;j++)
			{
				if(sm<s[j].m[i])
				{ 
					sm=s[j].m[i];					
					c=i;
				}
			}			
		printf("The subject topper in subject %d is %s\n",i+1,s[c].name);
		}
	}
}
