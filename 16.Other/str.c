#include<stdio.h>
#include<string.h>
void main()
{
	int a,b;
	char s1[15]={"hyderabad\0"};
	a=strlen(s1);
	printf("a=%d",a);
	b=strlen(s1+2);
	printf("b=%d",b);
	printf("s1=%s1",s1);

}
