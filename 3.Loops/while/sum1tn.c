//wacp to print to find sum of all natural numbers between 1 to n
#include<stdio.h>
void main()
{
        int i,n,sum=0;
        printf("enter  n value..");
        scanf("%d",&n);
         i=1;
         while(i<=n)
         {
		 sum=sum+i;
           i++;
         }
	 printf("%d",sum);
}

