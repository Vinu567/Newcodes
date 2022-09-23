#include<stdio.h>
void main()
{
        int a=1;
        switch(a)
        {
            case 1: printf("case 1\n");
                    a++;
            case 2: printf("case 2\n");
		    a++;
           case 5: printf("case 5\n");
		    a++;
		   printf("a value=%d\n",a);
                    break;
           case 7: printf("case 7");
                    break;
	   case	4:printf("a value is printed");
	            break;	  
           default :printf("enter valid number\n");
                    break;
        }
}

