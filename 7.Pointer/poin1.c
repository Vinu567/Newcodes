// wacp to know the value of the variable and address of the variable with the helpof pointer variable.
#include<stdio.h>
void main()
{
	int a;
	int *p;
	printf("enter a value");
	scanf("%d",&a);
	p=&a;
	*p=20;
	*(&a)=30;
	printf("a value=%d\n",a);
	printf("a value=%d\n",*p);
	printf("a value=%d\n",*(&a));
	printf("a addess=%p\n",p);
        printf(" a address=%p\n",&a);
        printf("p addess=%p\n",&p);
	}

