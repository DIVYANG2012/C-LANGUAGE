#include<stdio.h>
int main()
{
	int x,answer;
	int y;
	int z;
		
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
		printf("enter value of z:");
	scanf("%d",&z);
	
	answer=   (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("the answer is: %d",answer);
	
	return 0;
}
