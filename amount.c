#include<stdio.h>
void main()
{
	int amt,a,b,c,d,e,f,g,h,i,j;
	printf("Enter the amount ");
	scanf("%d",&amt);
	a=amt/2000;
	b=(amt%2000)/500;
	c=(amt%2000)%500/100;
	d=(amt%2000)%500%100/50;
	e=(amt%2000)%500%100%50/20;
	f=(amt%2000)%500%100%50%20/10;
	g=(amt%2000)%500%100%50%20%10/5;
	h=(amt%2000)%500%100%50%20%10%5/2;
	i=(amt%2000)%500%100%50%20%10%5%2/1;
	printf("the %damount in the demonistration of\n%d 0f 2000 notes\n %d of 500notes\n %d of 100 notes\n %d of 50 notes\n %d of 20 notes\n %d of 10 notes\n %d of 5 notes\n %d of 2rupee\n %d of 1 rupee",amt,a,b,c,d,e,f,g,h,i);
}
