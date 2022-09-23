//wap to prefix increment/decrement//
#include<stdio.h>
int main(void)
{
	int x=8;
	printf("x=%d\t",x);
	printf("x=%d\t",++x);//prefix increment
	printf("x=%d\t",x--);//postfix decrement
	printf("x=%d\t",x++);//postfix increment
	printf("x=%d\t",--x);//prefix decrement
	printf("x=%d\t",((x++)-(--x)));
}

