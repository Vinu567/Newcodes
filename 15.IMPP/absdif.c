//wacp to get the absolute differance between n and 51.if n is greater than 51 return  triple the absolute differance.
#include<stdio.h>
void main()
{
	int n,diff;
	printf("enter n value...");
	scanf("%d",&n);
	if(n>0)
	{
        	if(n>51)
         	{ 
			diff=n-51;
	        	diff=3*diff;
	        	printf("abosulte differance ...%d",diff);
		}
		else
		{
			diff=n-51;
			printf("%d",diff);
		}
	}
	else
	{
		diff=n-51;
		printf("absolute differance....%d",diff);
	}
}


                
