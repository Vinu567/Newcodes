// wacp enter length and breath of a rectangle and find area,preimeter of a rectangle. 
#include<stdio.h>
void main()
{
	int l,b,area,per;
	printf("enter lenght  and breadth of a rectangle...");
	scanf("%d%d",&l,&b);
	area=l*b;
	per=2*(l+b);
	printf("area of rectangle of length %d and breath %d is=%d\n",l,b,area);
	printf("perimeter of a rectangle of length %d and breath %d is =%d\n",l,b,per);
	printf("%d*%d=%d\n",l,b,area);
	printf("2*(%d+%d)=%d\n",l,b,per);	
}


