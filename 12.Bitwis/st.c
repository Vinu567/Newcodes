//  wacp to assain a values to stucture variables

#include<stdio.h>
#include<string.h>
struct st
{
	int num;
	char a[10];
	int c;
}s1;
struct st s2;
void main()
{
 printf(" enter a value..");
 scanf("%d",&s1.num);
 s1.c=45;
 strcpy(s1.a,"raju");
 strcpy(s2.a,"vinod");

 printf("%d\n"s1.num);
 printf("%s\n",s1.a);
 printf(`"%d\n",s1.c);
 printf("%s\n",s2.a);
}
