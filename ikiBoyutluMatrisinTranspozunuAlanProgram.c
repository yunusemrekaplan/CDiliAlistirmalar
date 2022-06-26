#include <stdio.h>

void elemanlariAl(int dizi[3][3])
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

void girilenMatrisiYazdir(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void elemanlariDegistir(int dizi[3][3])
{
	int i,j;
	int temp;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if( i == j )
			{
				break;
			}
			temp 	   = dizi[i][j];
			dizi[i][j] = dizi[j][i];
			dizi[j][i] = temp;
		}
	}
}

void transpozMatrisiYazdir(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int dizi[3][3];
	
	elemanlariAl(dizi);
	girilenMatrisiYazdir(dizi);
	elemanlariDegistir(dizi);
	transpozMatrisiYazdir(dizi);
	
	return 0;
}

