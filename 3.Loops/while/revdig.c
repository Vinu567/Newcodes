//wacp to print to enter any number and print its reverse.
#include<stdio.h>
void main()
{
        int n,temp,rev=0,num;
        printf("enter  n value..");
        scanf("%d",&n);
        num=n;
         while(n!=0)
         {
           temp=n%10;
	   rev=rev*10+temp;
           n=n/10;
         }
         printf("reverse=%d of a given numb=%d",rev,num);
}


