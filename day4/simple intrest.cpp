
#include<stdio.h>

int main()
{
	int p,t;
	float s,r;
		
	
	printf("enter principle value:");
	scanf("%d",&p);
	printf("enter value of rate of intrest:");
	scanf("%.2f",&r);
	printf("enter value of time period:");
	scanf("%d",&t);
	s=p*r*t/100;
	printf("value of intrest=%.2f",s);
	
	return 0;
}

