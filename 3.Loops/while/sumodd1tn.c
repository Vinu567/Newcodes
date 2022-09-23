//wacp to find sum of all odd numbers from 1 to n
#include<stdio.h>
void main()
{
        int i,n,sum=0;
        printf("enter  n value..");
        scanf("%d",&n);
         i=1;
         while(i<=n)
         {
                 if(i%2 !=0)
	         {
         		sum=sum+i;
	          }
           i++;
         }
	 printf("sum of odd numbes from 1 to %d=%d\n",n,sum);
}

