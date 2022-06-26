#include <stdio.h>

void diziyiAl(int dizi[],int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
}

int dizidekiEnBuyukSayi(int dizi[],int size)
{
	int i;
	int max;
	max = dizi[0];
	
	for(i=0; i<size; i++)
	{
		if( max < dizi[i] )
		{
			max = dizi[i];
		}
	}
	return max;	
}

int dizidekiEnKucukSayi(int dizi[],int size)
{
	int i;
	int min;
	min = dizi[0];
	
	for(i=0; i<size; i++)
	{
		if( min > dizi[i] )
		{
			min = dizi[i];
		}
	}
	return min;
}

int maxMinFarki(int max,int min)
{
	int fark;
	fark = max - min;

	return fark;
}

int main()
{
	int maxSayi,minSayi,fark;
	int size;
		
	printf("dizi kac elemanli olacak: ");
	scanf("%d",&size);
	printf("\n");

	int dizi[size]; 
		
	diziyiAl(dizi,size);
	maxSayi = dizidekiEnBuyukSayi(dizi,size);
	minSayi = dizidekiEnKucukSayi(dizi,size);
	fark	= maxMinFarki(maxSayi,minSayi);
	
	printf("\nDizideki en buyuk sayi: %d \n",maxSayi);
	printf("Dizideki en kucuk sayi: %d \n",minSayi);	
	printf("\nEn buyuk ve en kucuk sayi arasindaki fark: %d",fark);	
	
	return 0;
}
