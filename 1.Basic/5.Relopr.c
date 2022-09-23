//wacp to understand use of all relational operators//
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("enter a value for a and b:");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is greater than %d",a,b);
	if(a>=b)
		printf("%d is greater and equal to %d",a,b);
	if(a<b)
		printf("%d is lesser than %d",a,b);
	if(a<=b)
		printf("%d is lesser  and equal to %d",a,b);
	if(a==b)
		printf("%d is equal to %d",a,b);
	if(a!=b)
		printf("%d is not equal to %d",a,b);
	return(0);
}

