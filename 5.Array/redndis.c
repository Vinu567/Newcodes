//write a c program to read elements in an array and display elements in an array
#include<stdio.h>
void main()
{
	int a[5],i;
	printf("enter elements in an array...");
	for(i=0;i<5;i++)
	{
          scanf("%d",&a[i]);
	}
	printf("print the elements in an array..");
	for(i=0;i<5;i++)
	{
	   printf("%d\t",a[i]);
	}
	printf("\n");
}


