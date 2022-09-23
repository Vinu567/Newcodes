// program related to bitwise operation like &(and ),|,^,~,>>,<< //

/*
#include<stdio.h>
void displayBits(int x);
 int main(void)
{
	char a=1;
	a=a<<5;
	printf("a=%c/t",a);
       displayBits(a);
}

*/
//write a progam to write the number in revese order with bitwise operator
#include<stdio.h>
void main()
{
	int num,rev;
	printf("enter a number....");
	scanf("%d",&num);
	rev=((num & 0x0F)<<4) | ((num & 0xF0)>>4);
        printf("%d",rev);
}	
