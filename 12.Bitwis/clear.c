//to clear a bit on nth position we use '&'(and) bitwise operator

#include<stdio.h>
int main(void)
{
	int num,pos,res;
	printf("enter a number");
	scanf("%d",&num);
        printf("enter a position");
	scanf("%d",&pos);
	printf("number before bit clearing..%d\n",num);
	res=num&(~(1<<pos)); /* to clear a sigle bit in any position of the 
				given number by the user*/
	printf("number after bit clearing..%d\n",res);
}


// to clear n number of consecutive bits ,form nth position onwards

/*
#include<stdio.h>
int main(void)
{
        int num,pos,res,n;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter position");
	scanf("%d",&pos);
	printf("n value");
	scanf("%d",&n);
        printf("number befor clearing the bits...",&num);
	res=num&(~(n<<pos)); //clearing the no of bits of the required position with th
	                      //the help of and bitwise operator
	printf("number after clearing the bits...",&res);
}
*/
      



