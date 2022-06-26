#include <stdio.h>

void ilkDiziAl(int dizi[],int size)
{
	int i;
	
	printf("Ilk dizinin elemanlarini giriniz.\n");
	
	for(i=0; i<size; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
}

void ikinciDiziAl(int dizi[],int size)
{
	int i;
	
	printf("Ikinci dizinin elemanlarini giriniz.\n");
	
	for(i=0; i<size; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n");
}

char diziKarsilastir(int dizi1[],int size1,int dizi2[],int size2)
{
	char uyari1, uyari2;
	uyari1 = "hayir";
	uyari2 = "evet";
	int i,j,k;
	int kontrol;
		
	for(i=0; i<size1; i++)
	{
		kontrol = 0;
		for(j=0; j<size2; j++)
		{
			if( dizi1[i] == dizi2[j])
			{
				kontrol = 1;
			}
		}
		if( kontrol == 0 )			 			// eger birinci dizideki eleman ikinci dizide yoksa fonksiyon duruyor. 
		{
			return uyari1;
		}
	}
	return uyari2;
}

int main()
{
	int size1;
	int size2;
	
	printf("Ilk dizi kac elemanli olacak: ");
	scanf("%d",&size1);
	printf("Ikinci dizi kac elemanli olacak: ");
	scanf("%d",&size2);
	printf("\n");
	
	if( size1 > size2 )
	{
		printf("Birinci dizi ikinci diziden buyuk olamaz...");
		return 0;
	}
	
	int dizi1[size1];
	int dizi2[size2];
	
	char uyari;
	ilkDiziAl(dizi1,size1);
	ikinciDiziAl(dizi2,size2);
	uyari = diziKarsilastir(dizi1,size1,dizi2,size2);
	
	printf("Birinci dizi ikinci diziye dahil mi?");
	printf("%c",uyari);
	
	
	return 0;
}
