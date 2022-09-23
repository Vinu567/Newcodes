//wacp to print to calculate sum of digits of any number.
#include<stdio.h>
void main()
{
        int n,dig,sum=0,num;
        printf("enter  n value..");
        scanf("%d",&n);
	num=n;
         while(n!=0)
         {
	      dig=n%10;
	      sum=sum+dig;
              n=n/10;
         }
         printf("sum of digits=%d of a given number=%d",sum,num);
}


