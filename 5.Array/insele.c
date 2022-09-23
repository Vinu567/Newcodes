//write a c progam to to inset a element in an array
#include<stdio.h>
void main()
{
        int a[15],i,pos,val;
        printf("enter elements in an array");
        for(i=0;i<10;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("print an array...");
        for(i=0;i<10;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("enter a position in which  element is inserted...");
	scanf("%d",&pos);
	printf("value enter in the position..");
	scanf("%d",&val);
        for(i=10;i>pos;i--)
        {
		a[i]=a[i-1];
		if(i==pos)
		{
			a[i]=val;
		}
		printf("%d",a[i]);
	}
	
}
 
	
