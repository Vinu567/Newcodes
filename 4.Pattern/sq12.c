/* 1 2 3 4 5
   2 3 4 5 6
   3 4 5 6 7 
   4 5 6 7 8 
   5 6 7 8 9
                */
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=0;j<=4;j++)
                {
                  printf("%d",(i+j));
                }
                printf("\n");
        }
}


