#include<stdio.h>
void main()
{
int t,min,h ;
printf("enter the time");
scanf("%d",&t);
h=t/60;
min=t%60;
printf("%d hour%d min",h,min);
}
