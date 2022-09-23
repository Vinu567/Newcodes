#include<stdio.h>
void main()
{
	int num,i,b[10];
	printf("enter a integer number...");
	scanf("%d",&num);
	for(i=0;num>0;i++)
	{
         b[i]=num%2;
	 num=num/2;
	}
	printf("i value is...%d\n",i);
	printf("binay number of a given number...\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
		if(b[i]==1)
		{ 
			printf("set bit positon..%d\n",i);
		}

}

