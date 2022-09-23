//wacp to a two  strings and copy one string ove anoter string wit using sting handling functions.  
#include<stdio.h>
#include<string.h>
void main()
{
        char a[10],b[16],k;
        printf("enter a string1 by the use..\n");
        scanf("%s",a);
        printf("first string=%s\n",a);
        printf("enter a string2 by the user..\n");
        scanf("%s",b);
        printf("second string=%s\n",b);
        strcpy(a,b);                         //copying the one string from other string.
       printf("after copy first string=%s\n",a);
       printf("after copy of second string=%s\n",b);
}

       


