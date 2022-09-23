/*print the patterns8 */

#include<stdio.h>
void main()
{
	int n,i,j,p;
	printf("enter the value of n......\n");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=(n-i);j++)
			printf(" ");
		p=i;
		for(j = 1;j<=i;j++)
			printf("%d",p++);
		p= p-2;
		for(j = 1;j<=i-1;j++)
			printf("%d",p--);
		printf("\n");
	
	}
}
