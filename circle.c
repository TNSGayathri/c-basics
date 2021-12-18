#include<stdio.h>
void main()
{
int r;
float a,p;
printf("Enter the radius of the circle ");
scanf("%d",&r);
a=3.14*r*r;
p=2*3.14*r;
printf("area of the circle of %d is %f",r,a);
printf("\nperimeter of the circle of %d is %f",r,p);
}
