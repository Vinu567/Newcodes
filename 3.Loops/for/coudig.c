//wacp to count number of digits in any number 
#include<stdio.h>
void main()
{
        int i,n,c=1;
        printf("enter  n value..");
        scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	c++;
	n=n/10;
	}
	printf("no of digits of given number=%d",c);

}

