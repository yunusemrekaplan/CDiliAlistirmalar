#include <stdio.h>

int main()
{
	int i,number,control;
	
	printf("enter a number: ");	scanf("%d",&number);
	
	for(i=2; i<number; i++)
	{
	
		if( number %i == 0)
		{
			control = 0;
			break;
		}
	}
	
	if( number < 2 )
	{
		control = 0;
	}							
		
	if( control == 0 )		printf("number is not prime.");
	else					printf("number is prime.");
	
	
	return 0;
}


