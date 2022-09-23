//sum of two numbers  by useing functions
#include<stdio.h>
void sum(int ,int);
void main()
{
	int a,b,r;
       r=sum(a,b);
       printf("r value is...%d",r);
}
void sum(int x,int y)
{
	int s;
	printf("enter two numbers...");
	scanf("%d%d",&x,&y);
	s=x+y;
}
