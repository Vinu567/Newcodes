#include<stdio.h>
void main()
{
	unsignedint num,m,n;
	printf("enter number..");
	scanf("%d",&num);
	printf("m bit postion");
	scanf("%d",&m);
	printf("n bit position");
	scanf("%d",&n);
	if(((num & (1<<m))?1:0))
	{
	num=num & (~(1<<n));	
	printf("result %d",num);
	}

}

	
