//wacp to display string and print the lenght of a string without using of string handling functions.
#include<stdio.h>
void main()
{
	char a[20],i,c=0;
        printf("enter a string..");
	for(i=0;i<5;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("display a string..");
	for(i=0;i<5;i++)
	{
		printf("%c",a[i]);
	}
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("length of a string..=%d\n",c);
}

