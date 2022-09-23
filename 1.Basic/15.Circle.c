// enter radius of a circle and find diameter,area,circumfrence of a circle.
#include<stdio.h>
void main()
{
	float r,d,area,crf;
	printf("enter radius of a circle");
	scanf("%f",&r);
	d=2*r;
	area=3.14*r*r;
	crf=2*3.14*r;
	printf("diameter of circle of radius of %f is =%f\n",r,d);
	printf("area of a circle with radius of %f is=%f\n",r,area);
	printf("circumfrence  of a circle with radius of %f is=%f\n",r,crf);
	printf("3.14 * %f * %f = %f",r,r,area);
}
