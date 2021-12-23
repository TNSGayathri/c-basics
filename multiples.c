#include<stdio.h>
void main()
{
	int x,y,a,l,n,s;
	printf("enter the values of x and y");
	scanf("%d%d",&x,&y);
	n=y/x;
	a=x;
	l=x*n;
	s=n*(a+l)/2;
	printf("multiples of %d below %d is:%d",x,y,s);
	
}
