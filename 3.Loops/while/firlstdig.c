//wacp to print to find the first and last digit of any number
#include<stdio.h>
void main()
{
        int n,fis,lst,num;
        printf("enter  n value..");
        scanf("%d",&n);
	num=n;
        lst=n%10;
         while(n>=10)
         {
           fis=n/10;
	   n=n/10;
         }
         printf("first digit=%d last digit=%d of given numb=%d",fis,lst,num);
}

