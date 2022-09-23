//wacp enter the temperature in celicus and convert in the temperatue into fahreinheit.
#include<stdio.h>
void main()
{
	float temp,far;
	printf("enter a temperature in celicus");
	scanf("%f",&temp);
        far=temp*1.8+32;                        	           //c=(f-32)/1.8 or c=(f-32)*(5/9)
	printf("temperature in fahreinheit is %f\n",far);	  //f=(c*1.8)+32  or f=c*(9/5)+32
}
