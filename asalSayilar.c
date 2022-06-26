#include <stdio.h>

int main()
{
	int prime,i,j;
	int control = 1;
	
	for(i=3; i<15; i++)
	{
		for(j=2; j<i; j++)
		{
			if( i %j == 0)
			{
				control = 0;
				break;
			}
		}
		if( control == 1 )
		{
			printf("%d, ",i);
		}
		control = 1;
	}

	return 0;
}

