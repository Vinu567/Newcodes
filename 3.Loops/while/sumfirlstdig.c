//wacp to print to find the sum of first and last digit of any number
#include<stdio.h>
void main()
{
        int n,fis,lst,num,sum;
        printf("enter  n value..");
        scanf("%d",&n);
        num=n;
        lst=n%10;
         while(n>=10)
         {
           fis=n/10;
           n=n/10;
         }
	 sum=lst+fis;
         printf("sum of first=%d and last digit=%d of a given numb=%d",fis,lst,sum);
}


