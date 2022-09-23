//wacp to print lagest number of two numbers by  using conditional operator//
#include<stdio.h>
int main(void)
{
	int a,b,max;
	printf("enter value for a and b:");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;  //ternary operator
	printf("lagest number of %d and %d is %d\n",a,b,max);
	return(0);
}

