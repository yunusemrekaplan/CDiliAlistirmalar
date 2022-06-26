#include <stdio.h>
#include <math.h>

int main()
{
	int size,i,j,k;
	int numbers[99999];
	float sum = 0;
	
	
	printf("how mony elements will the array have: ");	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("enter the %dst number: ",i+1);
		scanf("%d",&numbers[i]);
	}
	
	printf("numbers: ");
	
	for(i=0; i<size; i++)
	{
		printf("%d, ",numbers[i]);
	}
	
	printf("\nsquares: ");
	
	for(i=0; i<size; i++)
	{
		numbers[i] *= numbers[i];
		printf("%d, ",numbers[i]);
	}
	
	for(i=0; i<size; i++)
	{
		sum += numbers[i];
	}
	float mean = sum/size;
	
	printf("\nmean: %f",mean);
	
	float root = sqrt(mean);
	printf("\n%f",root);
	
	return 0;
}
