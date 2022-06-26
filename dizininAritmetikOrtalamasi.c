#include <stdio.h>

void diziyiAl(int dizi[],int size)
{
	int i;
	
	for(i=0; i<size; i++)	
	{
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);	
	}
}

int dizidekiElemanlarinToplami(int dizi[],int size)
{
	int sum;
	int i;
	sum = 0;
	
	for(i=0; i<size; i++)
	{
		sum += dizi[i];
	}
	return sum;
}

int main()
{
	int size;
	
	printf("dizi kac elemanli olacak: ");
	scanf("%d",&size);
	printf("\n");
	
	int dizi[size];	
	diziyiAl(dizi,size);
	
	float sum;
	sum = dizidekiElemanlarinToplami(dizi,size);
	
	float aritmetikOrtalama;	
	aritmetikOrtalama = sum / size;
	
	printf("\ndizinin aritmetik ortalamasi: %f",aritmetikOrtalama);
	return 0;
}
