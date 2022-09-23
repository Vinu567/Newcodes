// wacp to know about the printf function in different ways.
#include<stdio.h>
void main()
{
	int a=23,k,b=256,s;
	printf("vinod\n");
	printf("\"\"\vinod\"\"\n ");
	printf("\"vinod\"");
	printf("is a good boy\n");
	printf("a value=%d\n",a);
	printf("a=%d b=%d c=%d\n",100,120,300);
	printf("d=%d e=%X f=%o k=%x\n",100,100,100,100);
	k=printf("%d\n",a);
        printf("k 1st value=%d\n",k);
	k=printf("%d\n",123344);
	printf("k 2nd value=%d\n",k);
	k=printf("%d %d %d\n",100,200+456,12+18+50);
	printf("k 3rd value=%d\n",k);
        s= printf("%d\n",b);
        printf("s value=%d\n",s);
	s=printf("%d %d",231,564);
	printf("s value=%d\n",s);



}

