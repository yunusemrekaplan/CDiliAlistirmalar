#include <stdio.h>

int main()
{
	int i,j,k,l;
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	l=sayi+1;
	for(i=1; i<=sayi; i++)
	{
		printf("%.2d ",i);
	}
	printf("\n");
	for(j=1; j<sayi; j++)
	{
		for(k=1; k<=2*sayi+2; k++)
	{
		printf(" ");
	}
		printf("%.2d\n",l);
		l++;
	}		
	
	for(i=1; i<sayi-1; i++)
	{
		
	}
	
	
	/*
	int dizi[sayi][sayi];
	k=0;
	
	for(i=0; i<sayi; i++)
	{
		for(j=0; j<sayi; j++)
		{
			k++;
			printf("%.2d ",k);
		}
		printf("\n");
	}
	*/
	
	
	
	
	
	
	/*
	
	*/
	
}

