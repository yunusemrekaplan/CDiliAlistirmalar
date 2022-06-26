#include <stdio.h>

int main()
{
	int size;
	
	printf("how many numbers will you enter: ");
	scanf("%d",&size);
	
	int array[size];

	int i, sum = 0;
	int *ptr;
	
	for(i=0; i<size; i++)
	{
		scanf("%d",&array[i]);
	}
	
	ptr = array;	// ptr = &array[0];
	
	for(i=0; i<size; i++)
	{
		sum = sum + *ptr;
		ptr++;
	}
	
	printf("%d",sum);
	
	return 0;
}
