#include <stdio.h>
#include <string.h>

/*
int fonksiyon(char *p, int sayi)
{
	int i,j;
	
	if( sayi >= 7)
	{
		printf("hata...");
		return 0;
	}
	
	for(i=sayi; i<8; i++)
	{
		printf("%c",p[i]);
	}
}

int main()
{
	char dizi[] = "yazilim";	
	int sayi;
	printf("Kelime kacinci harften sonra yazilmaya baslasin: ");
	scanf("%d",&sayi);
	
	fonksiyon(dizi,sayi);
	
	
	return 0;
}
*/

char *dondur(char *p, int index)
{
	int uzunluk = strlen(p);
	
	if( index >= uzunluk )
	{
		return NULL;
	}
	else
	{
		return p+index;
	}
}

int main()
{
	char dizi[] = "yazilim";
	int index;
	
	printf("Kelime kacinci harften sonra yazilmaya baslasin: ");
	scanf("%d",&index);
	
	char *p = dondur(dizi,index);
	
	if( p == NULL )
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}
}
