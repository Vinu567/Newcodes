// swap a every even and odd nibble fo a number given by the user

#include<stdio.h>
void main()
{
	int num,res;
	printf("enter number given by the user");
	scanf("%x",&num);
	printf("number before swapping a nibble..%x\n",num);
	res=(((num &(0x0F0F0F0F))<<4) | ((num &(0xF0F0F0F0))>>4));
	printf("number after swapping a nibble..%x\n",res);
}

