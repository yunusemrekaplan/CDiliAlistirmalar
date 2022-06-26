#include <stdio.h>

int mersenne(int number)
{
	int i,j,k,number;
	int sum = 1;
	
	j = 1;
	k = 2;
	
	
	printf("Enter a number: ");	scanf("%d",&number);
	printf("1, ");
	
	
	for(i=1; i<number; i++)
	{
		j  *= k;		 
		sum = sum + j;
		printf("%d, ",sum);
	}
	

}
