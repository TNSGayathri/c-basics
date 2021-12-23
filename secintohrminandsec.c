#include<stdio.h>
void main()
{
	int t,h,m,s;
	printf("enter the value of time in seconds ");
	scanf("%d",&t);
	h=t/3600;
	m=(t%3600)/60;
	s=(t%3600)%60;
	printf("%d in %dhrs %dmin %dsec",t,h,m,s);
}
