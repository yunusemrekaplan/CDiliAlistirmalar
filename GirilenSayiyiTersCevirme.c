#include <stdio.h>

int main()
{
	int num,temp,rev,i;
	
	rev = 0;
	
	printf("enter the number to be reversed: "); 
	scanf("%d",&num);
	
	while(num>=1)
	{
		temp = num %10;					
		rev = rev*10 +temp;				
		num /= 10;				
			
	}
	printf("%d",rev);	

	return 0;
}
