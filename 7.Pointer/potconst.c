// wacp to make pointer conatant that means the vale of the variable cannot  be change but  addess  of the variable can be changed.
#include<stdio.h>
void main()
{
	int a=12;
	int b=45;
	const *int ptr;
	ptr=&a;
	printf("%d",*ptr);
	*ptr=b;
	printf("%d",*ptr);
}





// int *const ptr;   constand pointer,address cannot be changed but the value can be changed.
// const int* ptr;   pointer constand,pointer through which the value of the variable that the pointer points cannot change.address change 
