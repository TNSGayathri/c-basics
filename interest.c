#include<stdio.h>
#include<math.h>
void main()
{
float p,t,r,i;
printf("Enter the principle ");
scanf("%f",&p);
printf("Enter the time ");
scanf("%f",&t);
printf("Enter the rate ");
scanf("%f",&r);
i=p*t*r/100;
printf("Interest of principle % .2f ,time % .2f and rate % .2fis % .2f",p,t,r,i);
}
