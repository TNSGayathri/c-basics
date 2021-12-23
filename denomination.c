#include<stdio.h>
void main()
{
	int amount,a,b,c,d,e,f,g,h,i;
	printf("enter the amount");
	scanf("%d",&amount);
	a=amount/2000;
	b=amount%2000/500;
	c=amount%2000%500/100;
	d=amount%2000%500%100/50;
	e=amount%2000%500%100%50/20;
	f=amount%2000%500%100%50%20/10;
	g=amount%2000%500%100%50%20%10/5;
	h=amount%2000%500%100%50%20%10%5/2;
	i=amount%2000%500%100%50%20%10%5%2/1;
	printf("2000 notes is %d",a);
printf("\n500 notes is %d",b);
printf("\n100 notes is %d",c);
printf("\n50 notes is %d",d);
printf("\n20 notes is %d",e);
printf("\n10 notes is %d",f);
printf("\n5 notes is %d",g);
printf("\n2 notes is %d",h);
printf("\n1 notes is %d",i);
	
}
