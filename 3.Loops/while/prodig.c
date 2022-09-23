//wacp to print to calculate product of digits of any number
#include<stdio.h>
void main()
{
        int n,pro=1,dig,num;
        printf("enter  n value..");
        scanf("%d",&n);
        num=n;
         while(n!=0)
         {
            dig=n%10;
	    pro=dig*pro;
            n=n/10;
         }
         printf("product  of digits=%d of  given numb=%d",pro,num);
}


