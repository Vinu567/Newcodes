//write a c pogram to find th given matrix is identity or not
#include<stdio.h>
void main()
{
	int a[3][3],i,j,c=0;
	printf("enter a matrix elements by the user..");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix given by the user..");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i==j && a[i][j]==1 ) || (i!=j && a[i][j]==0))
			  c++;
		}
	}
	if(c==9)
	printf(" matrix is identity...");
	else
	printf("matrix is not identity..");
}

