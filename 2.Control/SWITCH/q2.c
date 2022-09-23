#include<stdio.h>
void main()
{
        int a=10;
        switch(a)
        {
		case 10: printf("ten");    //if case 1:printf("ten") ans is enter valid number
            case 2: printf("TWENTY");
           case 5: printf("fifty");
                    break;
           case 7: printf("case 7");
                    break;
           default :printf("enter valid number\n");
                    break;
        }
}

