//wacp to find the data is stored in little endia or big endian
#include<stdio.h>
int main()
{
	int a=0x12345678;
	char *p;
	p=(char*)&a;
	if(*p == 78)
	{
            printf("little endian...");
	}
	else if(*p == 12)
	{
           printf("big endian..");
	}
	return 0;
}
