#include <stdio.h>
#define MAX 500

int putInArray(int array[],int size)
{
	int i,j;
	j = 0;
	
	for(i=1; i<1000; i++)
	{	
		if( i % 3 == 0 || i % 5 == 0)
		{
			array[j] = i;
			j++;
		}
	}
	return j;
}

void printArray(int array[],int size,int size1)
{
	int i;
	
	printf("Multiples of 3 and 5: ");
	for(i=0; i<size1; i++)
	{
		printf("%d ",array[i]);
	}
}

int arraySum(int array[],int size,int size1)
{
	int sum;
	int i;
	for(i=0; i<size1; i++)
	{
		sum = sum + array[i];
	}
	return sum;
}

int main()
{
	int array[MAX],size;
	int size1;
	int sum;
	
	size1 = putInArray(array,size);
	
	putInArray(array,size);	
	printArray(array,size,size1);		
	
	sum = arraySum(array,size,size1);
	
	printf("\nSum of multiples of 3 and 5: %d",sum);
	
	return 0;
}
