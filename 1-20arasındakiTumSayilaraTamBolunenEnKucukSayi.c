#include <stdio.h>

int main()
{
	int i,j,k;
	int control;
	i = 1;
	while(1)
	{
		i++;
		for(j=1; j<20; j++)
		{
			control = 0;
			if( i % j != 0 )
			{
				control = 0;
				break;
			}
			else
			{
				control = 1;
			}
		}
		if( control == 1 )
		{
			break;
		}
	}	
	printf("%d",i);
	return 0;
}
