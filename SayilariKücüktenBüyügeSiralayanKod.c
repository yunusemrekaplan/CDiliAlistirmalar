#include<stdio.h>

int main()
{
	int numbers[20000];
	
	int i,j,temp,size;
	
	printf("how many numbers will you enter: ");	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("enter a number: "); 
		scanf("%d",&numbers[i]);
	}

    for(j=0; j<size; j++)
	{
        for(i=0; i<size; i++)
		{
            if(numbers[i] < numbers[i+1])								
			{
                temp	     = numbers[i];									
                numbers[i]	 = numbers[i+1];						
                numbers[i+1] = temp;											
            }													
        }
    }

    for(i=0; i<size; i++)
	{
        printf("%d ",numbers[i]);
    }
	
	return 0;
}
