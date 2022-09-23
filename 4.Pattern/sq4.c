/* 1 1 1 1 1
   1 0 0 0 1
   1 0 0 0 1 
   1 0 0 0 1
   1 1 1 1 1
                */
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=5;j++)
                {
                        if((i==1) ||(j==1) || (i==5) ||(j==5)) 
                          printf("1");
                        else
                           printf("0");
                }
        printf("\n");
        }
}

