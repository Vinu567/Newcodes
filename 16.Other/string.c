#include<stdio.h>
void main()
{
	char a[40];
	scanf("%s",a);
	int i ,temp ,j,count =0;
	for(i =0 ; a[i] != '\0' ; i++);
	i = i-1;
	for(j =0 ; j <  i ; i-- ,j++ )
	{
		/*temp = a[i];
		a[i] = a[j];
		a[j] = temp;*/
		if(a[i] != a[j])
		{
			count++;
			break;
		
		}
	
	
	}
	
	printf("%s\n",a);
	if(count == 0)
	{
		printf("palindrome");
	
	}
	else
	{
		printf("Not Palindrome");
	
	}
}
