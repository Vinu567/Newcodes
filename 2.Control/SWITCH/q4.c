#include<stdio.h>
void main()
{ 
	int a;
        switch(0)
        {
            case 0: printf("hi i am vinod\n");
		    int a=45;
		    printf("%d\n",a);
            case 2: printf("is a very good boy");
		    int a=16,b=66;                             // if we assign a value again in another switch case it will show error as 
	                                                       //a value is redifined	    
		    printf("%d%d\n",a,b);
                    break;
           case 5: printf("case 5");
                    break;
           case 7: printf("case 7");
                    break;
           default :printf("enter valid number\n");
                    break;
        }
}
 


// for above prg if we don't make assain a value the the output will be
// hi i am vinod 
// 45
// is a very good boy
// 4566
