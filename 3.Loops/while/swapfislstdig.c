//wacp to print to swap the first and last digit of any number
#include<stdio.h>
void main()
{
        int n,fis,lst,num,temp;
        printf("enter  n value..");
        scanf("%d",&n);
        num=n;
        lst=n%10;
         while(n>=10)
         {
           fis=n/10;
           n=n/10;
         }
         printf("before swapping:: first digit=%d last digit=%d of given number=%d\n",fis,lst,num);
	 temp=fis;
	 fis=lst;
	 lst=temp;
	 printf("after swapping :: fist digit=%d last digit=%d of gven number=%d\n",fis,lst,num);
}


