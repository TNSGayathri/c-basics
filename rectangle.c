#include<stdio.h>
void main()
{
int l,b,a,p;
printf("Enter the length and breadth of the rectangle");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area of the rectangle of %d and %d is %d",l,b,a);
printf("\nPerimeter of the rectangle of %d and %d is %d",l,b,p);
}
