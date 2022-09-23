//wacp to find power of any number
#include<stdio.h>
void main()
{
	int exp,b,i,pow=1;
        printf("enter base value...");
	scanf("%d",&b);
	printf("enter exponent value...");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++)
	{
		pow=pow*b;
	}
	printf("power of a number =%d",pow);
}

