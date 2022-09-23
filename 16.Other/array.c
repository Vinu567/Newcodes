#include<stdio.h>
void main()
{
	int j,n,i,count =0 ,a[40];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i = 0 ;i < n ; i++)
	{
	
		scanf("%d",&a[i]);
	
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j =i+1 ; j < n ; j++)
		{		
			if(a[i] == a[j])
			{
				count++;
				break;
					
			}
	
		}
	}

	
	 printf("%d",count);
		
	
}
