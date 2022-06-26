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
	int i,j,m,n,a,b;
	int temp;
	m = 3;
	n = 2;
	a = 0;
	b = 2;
	
	for(i=0; i<3; i++)
	{
		m--;
		n = 2;
		for(j=0; j<3; j++)
		{
			temp 	   = dizi[i][j];
			dizi[i][j] = dizi[m][n];
			dizi[m][n] = temp;
			n--;
			if( m == 1 )
			{
				temp 	   = dizi[m][a];
				dizi[m][a] = dizi[m][b];
				dizi[m][b] = temp;	
			}
		}		
		if( m == 1)
		{
			break;
		}
	}
}

void tersCevrilmisMatrisiYazdir(int dizi[3][3])
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

void tersCevrilenMatrisinElemanlari(int dizi[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%dx%d elemanini: %d\n",i+1,j+1,dizi[i][j]);
		}
	}
	printf("\n");
}

int main()
{
	int dizi[3][3];
	
	elemanlariAl(dizi);
	girilenMatrisiYazdir(dizi);
	elemanlariDegistir(dizi);
	tersCevrilmisMatrisiYazdir(dizi);
	tersCevrilenMatrisinElemanlari(dizi);
	
	return 0;
}

