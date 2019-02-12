//triangle rectangle sq circle
#include<stdio.h>
void main()
{
	float x,y;
	int z;
	printf("1.Triangle\n2.rectangle\n3.Square\n4.Circle\nEnter th choice:");
	scanf("%d",&z);
	switch(z)
	{
		case 1:	printf("Enter the height and breadth of the tirangle.");
			scanf("%f%f",&x,&y);
			printf("%f is the area.",0.5*x*y);
			break;
		case 2:	printf("Enter the length and breadth of the redtangle.");
			scanf("%f%f",&x,&y);
			printf("%f is the area. ",x*y);
			break;
		case 3:	printf("Enter the side of the square.");
			scanf("%f",&x);
			printf("%f is the area.",x*x);
			break;
		case 4:	printf("Enter the radius of the circle.");
			scanf("%f",&x);
			printf("%f is the area.",3.14*x*x);
	}
}
