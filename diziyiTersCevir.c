#include <stdio.h>

int main()
{
	int elemanSayisi;
	
	printf("dizi kac elemanli olsun: ");	
	scanf("%d",&elemanSayisi);
	
	int dizi[elemanSayisi];
	int i,j,k,l;
	int gecici;
	
	for(i=0; i<elemanSayisi; i++)
	{
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	l=elemanSayisi;
		
	for(j=0; j<elemanSayisi/2; j++)					// derste yazdýðým koddan deðiþtirdiðim tek þey elemanSayisini ikiye bölmek oldu :)
	{
		l--;
		gecici	= dizi[l];
		dizi[l]	= dizi[j];
		dizi[j]	= gecici;	
	}
	
	for(k=0; k<elemanSayisi; k++)
	{
		printf("%d ",dizi[k]);
	}
	
	return 0;
}
