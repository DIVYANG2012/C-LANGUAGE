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
	
	answer=  (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+(3*(z+x)));
	
	printf("the answer is: %d",answer);
	
	return 0;
}
