//wacp to find the area of a triangle.
#include<stdio.h>
void main()
{
	int b,h;
	float area;
       printf("enter base and height of a triangle...");
       scanf("%d%d",&b,&h);
       area=1/2*b*h;
       printf("area of a triangle of base %d and height %d is %f\n",b,h,area);
       printf("1/2*(%d * %d)=%f\n",b,h,area);
       area =b*h*0.5;
         printf("area of a triangle of base %d and height %d is %f\n",b,h,area);
       printf("0.5*(%d * %d)=%f\n",b,h,area);

}

