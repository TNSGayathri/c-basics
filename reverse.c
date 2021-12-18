#include<stdio.h>
void main()
{
int h,min,time;
printf("enter hour ");
scanf("%d",&h);
printf("enter minutes ");
scanf("%d",&min);
time=60*h+min;
printf("totaltime = %dmin",time);
}
