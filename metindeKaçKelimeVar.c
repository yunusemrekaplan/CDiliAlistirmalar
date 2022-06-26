#include <stdio.h>

int kelimeSayisiAl(char metin[200])
{
	int i = 0;
	int kelimeSayisi = 1;
	while( metin[i] != '\0' )
	{
		if( metin[i] == ' ')
		{
			kelimeSayisi++;		
		}	
		i++;
	}
	return kelimeSayisi;
}

int main()
{
	char metin[200];
	
	puts("Bir cumle giriniz");
	gets(metin);
	
	int kelimeSayisi;
	kelimeSayisi = kelimeSayisiAl(metin);
	
	printf("%d",kelimeSayisi);
	
	return 0;
}
