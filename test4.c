#include <stdio.h>

int main()
{
	int i,j,k;
	int sayi;
	int asalMi;
	int asalA[9592];
	int n,m;
	
	asalA[0] = 2;
		
	m=1;
	for(i=2; i<99999; i++)
	{
		asalMi=1;
		for(j=2; j<i; j++)
		{
			if(i%j == 0 )
			{
				asalMi=0;
				break;
			}
		}
		if(asalMi == 1)
		{
			asalA[m] = i;							//printf("%d\n",i);
			m++;	
		}	
	}
	
	while(1)
	{	
		printf("\nbir sayi giriniz(cikmak icin 0'a basin): ");
		scanf("%d",&sayi);
		
		if(sayi==0)
		{
			printf("program durdu...");
			break;
		}
		printf("%d. asal sayi: %d",sayi, asalA[sayi]);
	}
	
	return 0;
}
