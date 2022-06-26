#include <stdio.h>

void diziyiAl(int dizi[],int size)
{
	int i;
	printf("\n");
	
	for(i=0; i<size; i++)	
	{
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);	
	}
}

int dizidekiEnBuyukCiftSayi(int dizi[],int size)
{
	int max;
	int i;
	max = dizi[0];
	
	for(i=0; i<size; i++)
	{
		if( max < dizi[i] )
		{
			if( dizi[i] % 2 == 0 )
			{
				max = dizi[i];
			}
		}
	}
	return max;
}

int dizidekiEnKucukCiftSayi(int dizi[],int size)
{
	int min;
	int i;
	min = dizi[0];
	
	for(i=0; i<size; i++)
	{
		if( min > dizi[i] )
		{
			if( dizi[i] % 2 == 0 )
			{
				min = dizi[i];
			}
		}
	}
	return min;
}

int main()
{
	int size;
	int dizi[size];	
	
	printf("dizi kac elemanli: ");
	scanf("%d",&size);
	
	diziyiAl(dizi,size);
	
	int ortalama;
	ortalama = ( dizidekiEnBuyukCiftSayi(dizi,size) + dizidekiEnKucukCiftSayi(dizi,size) ) / 2;
	
	printf("\ndizideki tek sayilarin aritmetik ortalamasi: %d",ortalama);
}
