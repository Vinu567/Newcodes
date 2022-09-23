//sum of numbers in an array
/*#include<stdio.h>
void main()
{
	int a[10],i,sum=0;	               //initialze the varables
        printf("enter array of numbers");
        for(i=0;i<10;i++)           
	{
		scanf("%d",&a[i]);             //read the numbers of an array
	}
	printf("print an array...");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of all elements in an array=%d\n",sum);           
}
*/
#include<stdio.h>
#define s  1
void main()
{
	int a[s],i,sum=0;
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
	        printf("%d\n",a[i]);
	}
	for(i=0;i<s;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
}

