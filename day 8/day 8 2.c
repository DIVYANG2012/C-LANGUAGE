#include<stdio.h>
int main()
{
	int a;
	
	printf("enter number a:");
	scanf("%d",&a);
	
	if(a>0)
{
	printf("a is positive");
	}	
	else if(a<0)
	{
		printf("a is negative");
	}
	else
	printf("number is neautral");
	return 0;
}
