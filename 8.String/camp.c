// wacp to read  a two strings and print a the strings,check weather the sirings ae equal or not. that mean
// s compare two strings without string handle functions
/*#include<stdio.h>
#include<string.h>
void main()
{
        char a[10],b[16],k;
        printf("enter a string1 by the use..\n");
        scanf("%s",a);
	printf("%s",a);
	printf("enter a string2 by the user..\n");
	scanf("%s",b);
        printf("%s",b);
	k=strcmp(a,b);                         //store the result of the two stings with of  ascii value of the string in the k.
	printf("%d\n",k);
	if(k>0)
	{
		printf("a string\n");
	}
	else if(k<0)
	{
		printf("b string\n");
	}
	else
	{
		printf("both are equal\n");
	}

}
*/
#include<stdio.h>
void main()
{
	char a[20],b[20],i=0,c=0;
	printf("enter a string1");
        gets(a);
	printf("enter a string 2");
	gets(b);
  	while(a[i]!='\0' && b[i]!='\0')
      //  for(i=0;(a[i] && b[i] )!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			c++;
			break;
		 
		}
         	i++;
	}
	if(c==0)
	  {
	   printf("stings are equal");
	  }
	else 
	{
		printf("strings are not equal");

	}
}

	

