// swap a every alterative bit in a nibble 

#include<stdio.h>
void main()
{
	int num,res;
	printf("enter a number");
	scanf("%x",&num);
	printf("number a before swapping a bit in a nibble..%x\n",num);

        res=((num &(0xAAAAAAAA))>>1)| ((num &(0X55555555))<<1);//alter bit  in a nibble with the help of 
	                                                   //right shift 
	                                                     
	printf("number a after swapping a bit in a nibble...%x\n",res);

}


