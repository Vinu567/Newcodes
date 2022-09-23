#include<stdio.h>
void main()
{
	int a=3,b=2;
	switch(a+b)
	{
            case 1: printf("case 1");
		    break;
            case 2: printf("case 2");
                    break;
           case 5: printf("case 5");
                    break;
           case 7: printf("case 7");
                    break;
           default :printf("enter valid number\n");
                    break;
	}
}
