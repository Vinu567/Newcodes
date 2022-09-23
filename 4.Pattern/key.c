#include<stdio.h>
void main()
{
	int a[10],b[10],k,i,c;
	printf("enter 10 elements...");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("print 10 elements...");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("enter key element..");
	scanf("%d",&k);
        for(i=0;i<10;i++)
	{
		if(a[i]==k)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("key element is found");
	else 
		printf("key element is not found");
}
