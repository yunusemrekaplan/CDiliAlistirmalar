#include <stdio.h>

int main()
{
	int i,j,k,asalMi;
	
	for(i=2; i<20000000; i++)
	{
		asalMi = 1;
		
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				asalMi = 0; 
				break;
			}
		}
		if(asalMi)	
		{
			printf("%d\n",i);
		}
	}
}
