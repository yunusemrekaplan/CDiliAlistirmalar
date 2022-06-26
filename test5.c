#include <stdio.h>

int sayilariAl(int dizi[],int size)
{
	
	int i,j,k;
	
	printf("dizi boyutunu girin: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("%d. sayiyi girin: ",i+1);
		scanf("%d",&dizi[i]);	}
	
	
}


int main()
{
	/*
	sayilariAl[]    = sayilariAl();
	alinanSayilar[] = alinanSayilar();
	buyukOlaniBul	= buyukOlaniBul();
	*/
	
	int size;
	int dizi[size];
	sayilariAl(dizi[size]);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
