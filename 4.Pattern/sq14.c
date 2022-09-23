/* 5 5 5 5 5
   5 4 4 4 4
   5 4 3 3 3
   5 4 3 2 2 
   5 4 3 2 1
                */
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=5;j++)
                {
			if(i==1 || j==1)
			printf("5");
			else if(i==2 || j==2)
			       printf("4");
		        else if(i==3 || j==3)
			      printf("3");
			else if (i==4 || i==4)
				printf("2");
			else 
				printf("1");
                }
                printf("\n");
        }
}

