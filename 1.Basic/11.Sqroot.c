//wacp enter a number and find the square root of a number.
#include<stdio.h>
#include<math.h>
int main()
{
	float num,sqr;
	printf("enter a number");
	scanf("%f",&num);
	sqr=sqrt(num);
	printf("square root of a %f is %f\n",num,sqr);
	return 0;
}


