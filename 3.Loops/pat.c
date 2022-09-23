/*print the patterns8 */

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the value of n......\n");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j <= 2*(n-i);j++)
			printf(" ");
		for(j = i+1;j<=(2*i)-1;j++)
			printf("%d ",j);
		printf("\n");
	}
}
