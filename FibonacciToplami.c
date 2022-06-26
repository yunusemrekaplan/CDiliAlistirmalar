#include <stdio.h>
#define MAX 50

int getFibonacci(int array[],int size)
{
	int firstNum,secNum,temp,i;
	
	firstNum = 1;
	secNum 	 = 2;
	array[0] = 1;
	
	for(i=1; i<size; i++)
	{
		temp	 = secNum;
		array[i] = temp;
		secNum	 = secNum + firstNum;
		firstNum = temp;
	} 
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
}

int sumFibonacci(int array[],int size)
{
	int sum,i;
	sum = 0;
	
	for(i=0; i<size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int main()
{
	int array[MAX],size;
	size = 15;
	
	getFibonacci(array,size);
	sumFibonacci(array,size);
	
	int sum = sumFibonacci(array,size);
	
	printf("\nFibonacci sum: %d",sum);
	
	return 0;
}
