// arrays useing programs
#include<stdio.h>
void main()
{
	int a[10],i,s;
	printf("size of an array...");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<s;i++)
	{
		printf("%d\n",a[i]);
	}
}



