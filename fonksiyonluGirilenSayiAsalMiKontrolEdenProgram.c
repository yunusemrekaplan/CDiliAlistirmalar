#include <stdio.h>

int sayiAl()
{
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	return n;
}


int sayiKontrol(int n)
{
	int i,j;
	int asalMi;
	
	asalMi = 1;
	
	for(i=2; i<=n/2; i++)
	{
		if( n%i == 0 )
		{
			asalMi = 0;
			break;
		}
	}
	
	return asalMi;
}

void main()
{
	int sayi;
	int asalMi;
	
	sayi = sayiAl();
	asalMi = sayiKontrol(sayi);
	
	if( asalMi == 0)
	{
		printf("girilen sayi asal degildir.");
	}
	else 
	{
		printf("girilen sayi asaldir.");
	}
}
