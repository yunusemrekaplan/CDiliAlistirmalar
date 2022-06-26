#include<iostream>

const int k = 2;
const int l = 2;
const int a = 3;
const int b = 4;

int main(int argc, char* argv[])
{
	//k  l
	int altMatris[k][l] = { {99,10},
							{66,21} };

	//a  b
	int anaMatris[a][b] = { {11,34,42,60},
							{72,99,10,50},
							{80,66,21,38} };


	int altMatrisi = 0;
	int esitlikSayaci = 0;	 // Esitlik sayaci kullanilmadan da cozum mumkundu.

	int i;
	for (i = 0; i < a - k + 1; i++)
	{
		int j;
		for (j = 0; j < b - l + 1; j++)
		{		
			//Ustteki 2 dongu, ana matrisi iterate etmektedir.
			int y;
			for (y = 0; y < k; y++) 
			{		// Icteki iki dongu, ana matrisin iterate edilen her bir elemani icin, alt matristeki ilgili elemanin ayni olup olmadigini karsilastirmaktadir.
				int z;
				for (z = 0; z < l; z++)
				{
					if (anaMatris[i + y][j + z] == altMatris[y][z])
					{
						esitlikSayaci++;
					}
					else
					{
						break;
					}
				}
			}
			if (esitlikSayaci == k * l)
			{
				altMatrisi = 1;
				break;
			}
			esitlikSayaci = 0;
		}
	}

	if (altMatrisi == 1)
	{
		printf("alt Matrisidir.");
	}
	else
	{
		printf("alt Matrisi degildir.");
	}
}
