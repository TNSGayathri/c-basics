#include<stdio.h>
void main()
{
	int s,a,p;
	printf("Enter the side of a square ");
	scanf("%d",&s);
	a=s*s;
	p=4*s;
	printf("Area of the of the square of side %d is %d",s,a);
	printf("\nPerimeter of the of the square of side %d is %d",s,p);
}
