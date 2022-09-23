#include<stdio.h>
void main()
{

	int n,i,j,s;
	printf("ente the n value......\n");
	scanf("%d",&n);
	for(i =1;i<=n;i++)
	{
		for(j =1;j<= i;j++)
			printf(" ");
		s= 2*(n-i)+1;
		for(j = 1;j<=s;j++)
		{
			if(j== 5 && i ==1 ||j ==6 && i==1|| j==4 && i ==1|| j==1&&i==1 || j==s&&i ==1)
				printf(" ");
			else if(j ==4 && i==2)
				printf(" ");
			else
         			printf("*");
		}
		printf("\n");
	}
}




