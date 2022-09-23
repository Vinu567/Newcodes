//wacp to count number of digits in any number 
#include<stdio.h>
void main()
{
        int i,n,c=0;
        printf("enter  n value..");
        scanf("%d",&n);
        do
	{
        n=n/10;
	c++;
        }while(n!=0);
        printf("no of digits of given number=%d",c);

}


