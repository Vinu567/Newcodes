//wacp to compute the sum of two given integer values.if the two values are the same ,then return triple their sum.
#include<stdio.h>
void main()
{
	int a,b,sum;
	printf("enter a and b value....");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		sum=3*(a+b);
	        printf("%d and %d=%d\n",a,b,sum);
	}
	else
	{
		sum=a+b;
	        printf("%d=%d:%d\n",a,b,sum);
	}
}



