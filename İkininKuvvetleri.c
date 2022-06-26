#include <stdio.h>

int main()
{
	int i,j,k,number;
	
	j = 1;
	k = 2;
	
	printf("Enter a number: ");	scanf("%d",&number);
	
	for(i=1; i<=number; i++)
	{
		j *= k;		 
		
	}
	printf("%d",j);
	
	return 0;
}
