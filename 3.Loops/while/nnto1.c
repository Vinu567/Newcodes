//wacp to print all natural numbers from n to 1
#include<stdio.h>
void main()
{
        int i,n;
        printf("enter  n value..");
        scanf("%d",&n);
         i=n;
         while(i<=n && i>=1)
         {
           printf("%d\n",i);
           i--;
         }
}

