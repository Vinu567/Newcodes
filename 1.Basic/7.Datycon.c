//wap to understand different datatype convestion  
#include<stdio.h>;
{
	int main()
	{
		char c1,c2;
		int i1,i2;
		float f1,f2;
		c1='H';
		i1=80.67;/*float convet into int ,80 is assigned in i1*/
		f1=12.6;
		c2=i1;/*int convert into char*/
		i2=f1;/*float convert into integer*/
                printf("c2=%c,i2=%d\n",c2,i2);
		f2=i1;/*int convet into float*/
		i2=c1;/* char convert into int*/
		printf("f2=%.2f,i2=%d\n",f2,i2);
		return 0;
	}
}
		



