//menu ins del exit
#include<stdio.h>
#define size 100
void main()
{
	int a[size],n,ch,c,b;
	printf("Enter the size and elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n1.updations.\n2.delestions.\nEnter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	printf("Enter the index and element:");
			scanf("%d %d",&c,&b);
			a[c]=b;
			break;
		case 2:	printf("Enter the index of element:");
			scanf("%d",&c);
			a[c]=0;
	}
	for(int i=0;i<n;i++)
	{
		printf("the elemnt is %d\n",a[i]);
	}
}
