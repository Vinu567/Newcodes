// wacp to find key  element  in a list useing functins
#include<stdio.h>
void Search(int a[] ,int,int );
void main()
{
  int s,k,i;
      printf("enter a size of an array \n");
      scanf("%d",&s);
      int a[s];
      printf("enter elements\n");
      for(i=0;i<s;i++)
      {
	      scanf("%d",&a[i]);
      }
      printf("enter key element..\n");
      scanf("%d",&k);
      Search(a,k,s);
}
void Search(int a[],int k,int s)
{
	int flag=0,i;
	for(i=0;i<s;i++)
	{
	   if(k==a[i])
	   {
		   flag=1;
	           break;
	   }
	   else
		   flag=0;
	}
       if(flag==1)
             printf("key element is found\n");
       else 
	     printf("key element is not found\n");
}  


