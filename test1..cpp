#include <stdio.h>


int main()
{
	int i,j,k,sum1,sum2;
	sum1 = 0;
	sum2 = 0;
	
	for(i=1; i<=100; i++)
	{
		k = i * i;
		sum2 = sum2 + k; 
	}
	printf("%d",sum2);
	
	for(i=1; i<=100; i++)
	{
		sum1 = sum1 + i;
	}
	j = sum1 * sum1;
	printf("\n%d\n",j);
	
	printf("%d",(j-sum));

}
