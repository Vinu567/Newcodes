// wa cp to read  a string and print a string.
#include<stdio.h>
#include<string.h>
void main()
{
        char a[20],b[12];
        printf("enter a string1 by the user..");
        scanf("%s",a);
	printf("enter a string2 by the  user..");
	scanf("%s",b);
	//strcat(a,b);
	//printf("%s\n",a);
	//printf("%s\n",b);
	strcat(b,a);
	printf("%s\n",a);
	printf("%s\n",b);

}

