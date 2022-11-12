//To clear n number of consecutive bits ,form nth position onwards


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
        printf("number befor clearing the bits...%d",num);
	res=num&(~(n<<pos)); //clearing the no of bits of the required position with th
	                      //the help of and bitwise operator
	printf("number after clearing the bits...%d",res);
}
