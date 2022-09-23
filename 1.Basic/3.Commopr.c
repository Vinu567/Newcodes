//wacp of to understand the useof comma operator//
#include<stdio.h>
int main(void)
{
	int  a,b,c,sum;
	sum=(a=8,b=7,c=9,a+b+c-(a+a));
	printf("sum=%d\n",sum);
      return(0);
      }


