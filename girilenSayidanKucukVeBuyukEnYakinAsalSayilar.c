#include <stdio.h>

int primeNumber(int num)
{
	int i,j;
	int control = 1;
	
	for(i=2; i<num; i++)
	{
		if( num % i == 0 )
		{
			control = 0;
			break;
		}
	}
	
	return control;
}

int lowerNumCheck(int num)
{
	int i,j;
	int control;
	
	for(i=num-1; i>0; i--)
	{
		control = 1;
		for(j=2; j<i; j++)
		{
			if( i % j == 0 )
			{
				control = 0;
				break;
			}
		}
		if( control == 1 )
		{
			return i;
			break;
		}
	}
}

int upperNumCheck(int num)
{
	int i,j,control;
	i = num+1;
	
	while(1)
	{
		control = 1;
		for(j=2; j<i; j++)
		{
			if( i % j == 0 )
			{
				control = 0;
				break;
			}
		}
		if( control == 1 )
		{
			return i;
			break;
		}
		i++;
	}
}

int main()
{
	int num;
	int control;
	int lowerNum;
	int upperNum;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	control = primeNumber(num);
	
	if( control == 1 )
	{
		printf("The number entered is prime.\n");
	}
	else
	{
		printf("The number entered is not prime.\n");
	}
	
	lowerNum = lowerNumCheck(num);
	printf("\nThe nearest prime number smaller than the entered number: %d",lowerNum);
	
	upperNum = upperNumCheck(num);
	printf("\nThe nearest prime number greater than the entered number: %d",upperNum);

return 0;	
}
