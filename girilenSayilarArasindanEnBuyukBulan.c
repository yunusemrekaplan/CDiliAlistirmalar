#include <stdio.h>

int main()
{
	int i,j,k;
	int big;
	int size;
	int array[size];
	
	printf("enter the array size: ");
	scanf("%d",&size);
	
	printf("\n");
	for(i=0; i<size; i++)
	{
		printf("enter the %dst number: ",i+1);
		scanf("%d",&array[i]);
	}
	
	printf("\n");
	printf("entered the array: ");
	for(i=0; i<size; i++)
	{
		printf("%d, ",array[i]);
	}
	
	i=0;
	big = array[i];
	for(; i<size; i++)
	{
		if(array[i]>=big)
		{
			big = array[i];
		}
	}
	
	printf("\nbiggest number entered: %d",big);
	
	return 0;
}
