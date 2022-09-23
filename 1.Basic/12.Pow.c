//wacp to enter a number and find the given power of the number.
/*#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,k;
	printf("enter a number for the powers");
	scanf("%d",&a);
	printf("power of the given number");
	scanf("%d",&b);
        k=pow(a,b);
	printf("power value  of the given number",k);
}
*/

// power of number without using math function.  
#include<stdio.h>
void main()
{
        int a,b,c,res=1;
	printf("enter base of number");
	scanf("%d",&a);
	printf("enter power of a number");
	scanf("%d",&b);
	c=b;
	while(b!=0)
	{
          res =res*a;
	  --b;
	  }
	  printf(" %d base of power %d is=%d\n",a,c,res);
}

