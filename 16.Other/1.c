#include<stdio.h>
void main()
{
        char name;
	printf("enter name \n");
	printf("answer is yes  type Y other wise type N \n");
        name = getchar();
	if(name == 'Y' || name == 'n')
		printf("your name please \n");
	else 
		printf("dont ask \n");

}

