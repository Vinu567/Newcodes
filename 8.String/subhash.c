#include<stdio.h>
#include<string.h>
void main()
{
	char a[] = "subhash";
	char b[] = "vinod";
	puts(a);
	memcpy(a,b,sizeof(b));
	puts(a);
}

