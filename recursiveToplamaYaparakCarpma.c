#include <stdio.h>


int carp(int a,int b)
{
	if( b == 0)
	{
		return 0;
	} 
	b--;
	return a + carp(a,b);
}

int main()
{
	int a,b;
	
	printf("enter a number: "); scanf("%d",&a);		
	printf("enter b number: "); scanf("%d",&b); 
	
	int sonuc  = carp(a,b);
	printf("%d",sonuc);
	
	return 0;
}
