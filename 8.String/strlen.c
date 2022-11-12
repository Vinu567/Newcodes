//wacp to display a string and find the lenght of a string.
/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],k;
	printf("enter a string..");
	scanf("%s",a);
	k=strlen(a);
	printf("lenght of a string is=%d",k);
}
*/
//wacp to find length of a sting without using library functions
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],i;
	int c=0;
        printf("enter a string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	       c++;
	}
	       	printf("lenght of a string is=%d",c);
}


