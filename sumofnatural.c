#include<stdio.h>
void main()
{
	int n;
	float sum;
	printf("Enter the value of n ");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("sum of first %d natural numbers is %f",n,sum);
}
