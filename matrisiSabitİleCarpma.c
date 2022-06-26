#include <stdio.h>

void matrisiAl(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%dx%d elemanini giriniz: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	printf("\n");
}

void matrisiYazdir(int dizi[3][3])
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
	printf("\n");
}

void matrisiCarp(int dizi[3][3],int carpan)
{
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			dizi[i][j] = dizi[i][j] * carpan;
		}
	}
}

void carpilanMatrisiYazdir(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%2d ",dizi[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int dizi[3][3];
	int carpan;
	
	printf("matrisi hangi sayi ile carpilacak: ");
	scanf("%d",&carpan);
	
	matrisiAl(dizi);
	matrisiYazdir(dizi);
	matrisiCarp(dizi,carpan);
	carpilanMatrisiYazdir(dizi);
	
	return 0;
}
