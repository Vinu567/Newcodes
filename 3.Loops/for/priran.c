// wacp to print prime numbers between the range m to n

#include<stdio.h>
void main()
{
	int m,n,j,i,c=0; 
	printf("enter m value..");
        scanf("%d",&m);
        printf("enter n value..");
        scanf("%d",&n);
        for(i=m;i<=n;i++)
	{
		c=0;
           for(j=2;j<=i/2;j++)
	   {
             if(i%j==0)
	      {
		     c++;
		     break;
	       }
	   }
          if(c==0)
          {
	     printf("%d",i);
           }
	}
}
