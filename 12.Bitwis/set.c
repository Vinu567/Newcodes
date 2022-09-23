// set a single bit for a given number by the user,we use '|'(or) bitwise operator


#include<stdio.h>
int  main(void)
{
	int num,pos,r;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter a position");
	scanf("%d",&pos);
	printf("before bit setting a bit..%d\n",num);
	r=num|(1<<pos);    /* to set a bit for a requied position 
				 with the  help of left shift'<<'*/
	printf("after bit setting a bit ..%d\n",r);
}




//to  set a n number of consecutive bits for a given number by the user for required position
/*
# include<stdio.h>
int main(void)
{
        int num,pos,r,n;
	printf("enter a number");
	scanf("%d",&num);
	printf("ente a position to change");
	scanf("%d",&pos);
	printf("number of consecutive bits");
	scanf("%d",&n);
        printf("number befoe setting bits",&num);
	r=num|(n<<pos);    //to set the n num of bits to requried postion with 
	                     //   the help of '<<'left shift 
	printf("number after setting bits",&r);
}
*/




            


