// find out the size and limits of data type//

#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
	printf("size of char datatype= %u\n",sizeof(char));
	printf("size of integer datatype= %u\n",sizeof(int));
	printf("size of short datatype=%u\n",sizeof(short));
        printf("size of long datatype=%u\n",sizeof(long));
	printf("size of double datatype=%u\n",sizeof(double));
        printf("size of longdouble datatype=%u\n",sizeof(long double));

        printf("signed char min value=%d\n",SCHAR_MIN);
        printf("signed char max value=%d\n",SCHAR_MAX);
        printf("un signed char max value=%d\n",UCHAR_MAX);

        printf("signed sort min value=%d\n",SHORT_MIN);

} 
