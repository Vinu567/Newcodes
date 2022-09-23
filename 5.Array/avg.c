//find the average  marks of the students in a class contain 10 students in a class.
#include<stdio.h>
void main()
{
	int n,sum=0,avg,i;
	printf("enter number of  students...");
	scanf("%d",&n);
	int marks[n];
	printf("enter marks of a sutdents...");
        for(i=0;i<n;i++)
        {
         scanf("%d",&marks[i]);
	 sum=sum+marks[i];
         }
       avg=sum/n;
       printf("%d",avg);
}



