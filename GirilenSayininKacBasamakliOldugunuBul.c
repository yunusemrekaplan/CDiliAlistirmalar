#include <stdio.h>


main()
{
	int i,num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	/*
	for(i=0; num>=1; i++)
	{
		num /= 10 ;


	*/
	
	i = 0;
	
	while(num>=1)
	{
		num /= 10;
		i++;
	}
	
	printf("The number you entered is %d digits. ",i);
	
	
}
