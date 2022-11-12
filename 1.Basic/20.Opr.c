#include<stdio.h>
void main()
{
	int i=0,j=1,k=2,m;
	m=i++ || k++ || j++;
	printf("%d%d%d%d",m,i,j,k);
}
