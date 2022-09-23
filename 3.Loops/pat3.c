#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the value of n......\n");
	scanf("%d",&n);
	for(i = 1; i <=n;i++)
	{
		for(j = 1;j<=n;j++)
		{
			if(i == 1 || j ==1)
				printf("5");
			else if(i==2 || j==2)
				printf("4");
			else if(i ==3 || j==3)
				printf("3");
			else if( i == 4 || j==4)
				printf("2");
			else if(i == 5 ||j==5)
				printf("1");
		}
		printf("\n");
	}
}
