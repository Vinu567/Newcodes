// wacp to point to  a variable.
#include<stdio.h>
void main()
{ 
	int a=10;
	int *p;
	scanf("%d",&a);
           p=&a;
	   printf("a value=%d,%d,%p,%p\n",a,*p,&a,p);   
	   *p=20;
	   printf("a value =%d,%d,%p,%p\n",a,*p,&a,p);

}

