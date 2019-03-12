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
			for(int i=n;i>=c;--i)
			{
				a[i+1]=a[i];
			}
			a[c]=b;
			break;
		case 2:	printf("Enter the index of element:");
			scanf("%d",&c);
			for(int i=c;i<n+1;i++)
			{
				a[i]=a[i+1];
			}
			n--;
	}
	for(int i=0;i<n;i++)
	{
		printf("the elemnt is %d\n",a[i]);
	}
}
