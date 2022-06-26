#include <stdio.h>

void dizi1Al(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("1. matrisin %dx%d elemanini giriniz: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	printf("\n");
}

void dizi2Al(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("2. matrisin %dx%d elemanini giriniz: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	printf("\n");
}

void dizileriTopla(int dizi1[3][3],int dizi2[3][3],int diziToplam[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			diziToplam[i][j] = dizi1[i][j] + dizi2[i][j];
		}
	}
	printf("\n");
}

void toplamMatrisinElemanlari(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Toplam matrisin %dx%d elemanin: %d",i+1,j+1,dizi[i][j]);
			printf("\n");
		}
	}
	printf("\n");
}

void diziToplamMatrisiniYazdir(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.d ",dizi[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int dizi1[3][3];
	int dizi2[3][3];
	int diziToplam[3][3];
	
	dizi1Al(dizi1);
	dizi2Al(dizi2);
	dizileriTopla(dizi1,dizi2,diziToplam);
	toplamMatrisinElemanlari(diziToplam);
	diziToplamMatrisiniYazdir(diziToplam);
	
	return 0;
}
