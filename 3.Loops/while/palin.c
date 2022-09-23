//wacp to print to enter any number and check wheather the number is palindome o not.
#include<stdio.h>
void main()
{
        int n,num,rev=0,temp;
        printf("enter  n value..");
        scanf("%d",&n);
        num=n;
         while(n!=0)
         {
           temp=n%10;
	   rev=rev*10+temp;
           n=n/10;
         }
	 if(num==rev)
                  printf("number=%d is palindrome=%d",num,rev);
	 else 
		 printf("number=%d is not a palindrom=%d",num,rev);
}


