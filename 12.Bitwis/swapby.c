// swap a every alternative byte (byte=8 bits) 

#include<stdio.h>
void main()
{
	int num,res;
	printf("enter a number by the user");
	scanf("%x",&num);
	printf("before swapping a nibble..%x\n",num);

	res=((num &(0xFF00FF00))>>8)|((num &(0x00FF00FF))<<8); //to alter a byte we have to do 8 bit shifs
	                                                       //so that we shift with 8

	printf("after  swapping a nibble..%x\n",res);
}



