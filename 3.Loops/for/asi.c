//wacp to print all ASCII character with their values
#include<stdio.h>
void main()
{
     unsigned char ch;
	     for(ch=0;ch<=127;ch++)
	{
		printf("ascii value of character %c=%u     ",ch,ch);
	}
}
