//wacp to print all odd numbes from 1 to 100
#include<stdio.h>
void main()
{
        int i;
         i=0;
         while(i<=100)
         {
		 if(i%2 != 0)
		 {
                     printf("%d ",i);
		 }
           i++;
         }
}

