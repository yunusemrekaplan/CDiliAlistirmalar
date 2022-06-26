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

int dizidekiTekElemanlarinOrtalamasi(int dizi[],int size)
{
	float k,sum;
	int i;
	sum = 0.0;
	k = 0.0;
	
	for(i=0; i<size; i++)
	{
		if( dizi[i] % 2 != 0)
		{
			sum += dizi[i];
			k++;
		}
	}
	return sum/k;
}

int main()
{
	int size;
	int dizi[size];	
	
	printf("dizi kac elemanli: ");
	scanf("%d",&size);
	
	diziyiAl(dizi,size);
	
	float ortalama;
	ortalama = dizidekiTekElemanlarinOrtalamasi(dizi,size);
	
	printf("\ndizideki tek sayilarin aritmetik ortalamasi: %f",ortalama);
}
