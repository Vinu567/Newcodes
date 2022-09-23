#include<stdio.h>
int fun()
{
printf("hello");
return 10;
}
int main()
{
	printf("%d",sizeof(fun()));
	return 0;
}
