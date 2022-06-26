#include <stdio.h>

int main()
{
	int i,j,k;
	int control = 1;
	k = 0;
	int array[4];
	for(i=2; i<9999; i++)
	{
		control = 1;
		for(j=3; j<i; j++)
		{
			if( i % j == 0 )
			{
				control = 0;
				break;
			}
		}
		if( control == 1 && 600851475143 % i == 0 )
			{
				//printf("%d ",i);
				array[k] = i;
				k++;
			}
	}
	
	printf("largest prime factor of the number 600851475143: 0%d ",array[k-1]);
	
	
	return 0;
}
