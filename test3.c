#include <stdio.h>

int main()
{
	int i,j,k;
	int a,b,c;
	int size;
	int sum = 1;
	a = 1;
	b = 2;
	
	scanf("%d",&size);
	
	for(i=1; i<size; i++)
	{
		a   *= b;
		sum += a;
		if(sum%2!=0 && sum%3!=0 && sum%7!=0 && sum%11!=0 && sum%13!=0 && sum%17!=0 && sum%19!=0 && sum%21!=0 && sum%2047!=0 && sum%536870911!=0 && sum%33554431!=0 && sum%11!=0) 
		printf("%d, ",sum);	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
