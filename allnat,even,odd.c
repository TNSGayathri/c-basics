#include<stdio.h>
void main()
{
	int n,s1,s2,s3;
	printf("enter the value of n ");
	scanf("%d",&n);
	s1=n*(n+1)/2;
	s2=n*(n+1);
	s3=n*n;
	printf("sum of first %d natural numbers is %d",n,s1);
	printf("\nsum of first %d even natural numbers is %d",n,s2);
  	printf("\nsum of first %d odd natural numbers is %d",n,s3);
}
