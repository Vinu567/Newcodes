// wacp of constant pointer that means address of a variable cannot  be changed but value of the variable  can be changed.
#include<stdio.h>
void main()
/*
	int a=12;
	int b=23;
	int *const ptr;
	ptr=&a;
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
	printf("%p\n",&a);
	//ptr=&b;
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
	printf("%p\n",&a);
*/
{ 
   int a=12,b=13;
   int *const p;
     p=&a;
     printf("%p\n",p);
     printf("%d\n",*p);
     p=&b;
     printf("%p\n",p);
     printf("%d\n",*p);              
}

