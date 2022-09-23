#include<stdio.h>
void main()
{
	int a,b,c;
	float root1,root2,d;
	d=((b*b)-(4*a*c));
		if(a==0)
		{
			ptintf("roots are cant determined");
			exit(0);
		}
		else if(d==0)
		{
			printf("the roots are equal");
			root1=(-b/2.0*a);
				printf("%d",root1);
		}
		else if(d>0)
		{
			printf("roots are real but not equal");
			root1=(-b+sqrt(d)/2.0*a);
				root2=(-b-sqrt(d)/2.0*a);
				printf("%f%f",root1,root2);
		}
		else if(d<0)
		{
			printf("roots are imaginary");
			p=-d;
			root1=(-b+sqt(p)/2.0*a);
				root2=(-b(p)/2.0*a);
				printf("%f%f",root1,root2);
		}
}
		
