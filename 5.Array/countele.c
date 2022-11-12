// write a c program to 
//              a) find no of even elements and odd elements  in an array.
//              b) sum of even numbers and odd numbers in an array.
//              c)sum of all elements in an array.
#include<stdio.h>
void main()
{
	int a[10],i,evel=0,oddele=0,sum=0,sumev=0,sumod=0;
        printf("enter elements in an array");
        for(i=0;i<10;i++)
        {
                scanf("%d",&a[i]);             
        }
        printf("print an array...");
        for(i=0;i<10;i++)
        {
                printf("%d\t",a[i]);
        }
        for(i=0;i<10;i++)
        {
                if(a[i]%2==0)
		{
		         evel++;
		        sumev=sumev+a[i];
		}
		else
		{
			oddele++;
		        sumod=sumod+a[i];
		}
	}
        sum=sumev+sumod;
	printf("number of even elements in an array.=%d\n",evel);
	printf("number of odd elements in an array..=%d\n",oddele);
	printf("sum of all even elements in an array...=%d\n",sumev);
	printf("sum of all odd elements in an array...=%d\n",sumod);
        printf("sum of all elements in an array=%d\n",sum);
}
