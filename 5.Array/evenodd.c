// enter numbes in an array and check weather the number is an even or odd
#include<stdio.h>
void main()
{
	int ev,od,i,a[i],size;
	printf("enter size of an array");
	scanf("%d",&size);
        printf("enter a numbers in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
		if(a[i]/2==0)
			printf("number  is even's");
		        printf("%d",a[i]);
		else
			printf("number  is odd's");
		        printf("%d",a[i]);

	}
}
