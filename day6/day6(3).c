#include<stdio.h>
int main()
{
	int x,answer;
	int y;
		
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	answer= (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("the answer is: %d",answer);
	
	return 0;
}
