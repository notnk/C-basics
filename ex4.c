#include<stdio.h>
void main()
{
	float u,a,d,t;
	printf("Enter the intial velocity,acc,time:");
	scanf("%f",&u);
	scanf("%f",&a);
	scanf("%f",&t);
	d=u*t+0.5*a*t*t;
	printf("\nDistance is:%f",d);
}
