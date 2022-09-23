//wacp to find ferquency of each digit in a given integer
#include<stdio.h>
void main()
{
	int i,n,a,rem,count = 0;
	printf("enter a number by the user...");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
	while(n>0)
	{
		rem = n%10;
		if(i==rem)
			count++;
		n = n/10;
	printf("ferquency of%d=%d\n",i,count);
	}
	}

}
      	

