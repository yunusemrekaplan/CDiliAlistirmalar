#include <stdio.h>

int getNumbers(int a,int b)
{
	printf("enter a number: "); scanf("%d",&a);	
	printf("enter a number: "); scanf("%d",&b);
}

int multiplication()
{
	int num1,num2;
	getNumbers(num1,num2);
	
	int sum,i;
	sum = 0;
	
	for(i=0; i<num1; i++)
	{
		sum += num2;		
	}
	
	return sum;
}

int main()
{
	printf("%d",multiplication());
	
	return 0;
}
