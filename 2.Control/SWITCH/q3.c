#include<stdio.h>
int main()
{
        switch(printf("hi-"))
        {
            case 1: printf("A");
                    break;
            case 3: printf("B");
                    break;
           case 5: printf("C");
                    break;
           case 7: printf("case 7");
                    break;
           default :printf("enter valid number\n");
                    break;
        }
}
  


// above programe the output is  enter valid number
// if we made case 3: printf("c"); the output will be  hi-c
