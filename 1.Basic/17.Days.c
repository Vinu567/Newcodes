// wacp to convert days into years,weeks and days.
#include<stdio.h>
void main()
{
	int days,weeks,years,month;
	printf("enter  number of days");
	scanf("%d",&days);
	years=days/365;
	month=(days%365)/30;
	weeks=((days%365)%30)/7;
	days=(days%365)%7;
	printf("years of given days=%d\n",years);
	printf("months of given days=%d\n",month);
	printf("no of weeks  of given days=%d\n",weeks);
	printf("remaining days of given days=%d\n",days);
}

