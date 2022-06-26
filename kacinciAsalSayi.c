#include <stdio.h>

int main()
{
	int i,j,k,l;
	int control = 1;
	int primeArray[9592];
	int primeArray1[9592];
	k = 0;
	l = 0;
	
	for(i=2; i<99999; i++)
	{
		for(j=2; j<i; j++)
		{
			if( i%j == 0 )
			{
				control = 0;
				break;
			}
		}
		if( control == 1 )
		{
			if( k > 9592)
			{
				primeArray1[l] = i;
				l++;
			}
			else if( k <= 9592)
			{
				primeArray[k] = i;
				k++;
			}	
		}
		control = 1;
	}
	
	int num;
	
	while(1)
	{
		if( num == -1 )
		{
			break;
		}
		printf("enter a number(press '-1' to exit): ");
		scanf("%d",&num);
		if( num > 9592 )
		{
			printf("%d\n",primeArray1[num-9592-1]);
		}
		else
		{
			printf("%d\n",primeArray[num-1]);
		}
	}
	return 0;
}
