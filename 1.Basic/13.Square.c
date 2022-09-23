//w a c p to enter side of a square and find the area,perimeter of a square.
#include<stdio.h>
void main()
{
        int a,area,pre;
	printf("enter side of a square.......");
	scanf("%d",&a);
	area=a*a;
	pre=4*a;
	printf("4*%d=%d\n",a,pre);
	printf("%d*%d=%d\n",a,a,area);
}

